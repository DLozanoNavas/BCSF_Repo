using System;
using System.Linq;
using Microsoft.EntityFrameworkCore;

namespace MySQL
{
    class Program
    {

        private static void ImprimirMenu()
        {
            Console.WriteLine("1. Crear Pais");
            Console.WriteLine("2. Crear Usuario");
            Console.WriteLine("3. Crear Cuidad");
            Console.WriteLine("4. Crear Bandera");
            Console.WriteLine("5. Agregar cuidad en la que has vivido.");
            Console.WriteLine("6. Imprimir usuario");
            Console.WriteLine("7. Imprimir paises");
            Console.WriteLine("8. Imprimir cuidades");
        }

        static void Main(string[] args)
        {
            while (true)
            {

                ImprimirMenu();
                var resp = Console.ReadLine();

                switch (resp)
                {
                    case "1":
                        // Usos con alcance    
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            Pais p = new Pais();
                            Console.Write("ID: ");
                            p.ID = Console.ReadLine();
                            Console.Write("Nombre: ");

                            p.Nombre = Console.ReadLine();
                            p.Habitantes = Int32.Parse(Console.ReadLine());

                            // Agregar pais p a la tabla Paises de la Base de datps 
                            bd.Paises.Add(p);
                            // Guardar cambios
                            bd.SaveChanges();


                        }
                        break;

                    case "2":
                        // Crear Usuario
                        using (var bd = new MySQL.Data.MySQLContext())
                        {

                            var usuario = new Usuario();

                            Console.Write("ID: ");
                            usuario.ID = Int32.Parse(Console.ReadLine());

                            Console.Write("Email: ");
                            usuario.Email = Console.ReadLine();

                            Console.Write("Nombre: ");
                            usuario.Nombre = Console.ReadLine();

                            Console.Write("PaisID: ");
                            usuario.PaisID = Console.ReadLine();

                            bd.Usuarios.Add(usuario);
                            bd.SaveChanges();
                        }


                        break;

                    case "3":
                        // Crear Cuidad
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            var cuidad = new Cuidad();

                            Console.Write("ID: ");
                            cuidad.ID = Console.ReadLine();

                            Console.Write("Nombre: ");
                            cuidad.Nombre = Console.ReadLine();

                            Console.Write("PaisID: ");
                            cuidad.PaisID = Console.ReadLine();

                            bd.Cuidades.Add(cuidad);
                            bd.SaveChanges();
                        }
                        break;

                    case "4":
                        // Crear Bandera"
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            var bandera = new Bandera();
                            Console.Write("ID: ");
                            bandera.ID = Int32.Parse(Console.ReadLine());

                            Console.Write("PaisID: ");
                            bandera.PaisID = Console.ReadLine();

                            Console.Write("URL: ");
                            bandera.URL_Bandera = Console.ReadLine();

                            bd.Banderas.Add(bandera);
                            bd.SaveChanges();

                        }
                        break;

                    case "5":
                        // Agregar cuidad en la que has vivido.
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            var CuidadUsuario = new CuidadUsuario();
                            Console.Write("ID: ");
                            CuidadUsuario.ID = Int32.Parse(Console.ReadLine());

                            Console.Write("CuidadID: ");
                            CuidadUsuario.CuidadID = Console.ReadLine();

                            Console.Write("UsuarioID: ");
                            CuidadUsuario.UserID = Int32.Parse(Console.ReadLine());

                            bd.CuidadesUsuarios.Add(CuidadUsuario);
                            bd.SaveChanges();
                        }

                        break;

                    case "6":
                        // Imprimir usuario
                        Console.Write("Qué usuario quieres imprimir: ");
                        int id = Int32.Parse(Console.ReadLine());
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            Usuario usuario = bd.Usuarios
                            .Include(c => c.CuidadesUsuario )
                            .ThenInclude(c => c.Cuidad)
                            .First(c => c.ID == id);

                            if (usuario == null)
                            {
                                Console.WriteLine($"Usuario con ID: {id} no encontrado en la base de datos");
                                break;
                            }

                            Console.WriteLine($"ID: {usuario.ID}");
                            Console.WriteLine($"Email: {usuario.Email}");
                            Console.WriteLine($"Nombre: {usuario.Nombre}");
                            Console.WriteLine($"Pais: {usuario.PaisID}");
                            Console.WriteLine($"Ciudades en las que ha vivido: ");

                            foreach(var cuidadusuario in usuario.CuidadesUsuario){
                                Console.WriteLine($"         {cuidadusuario.Cuidad.Nombre}, {cuidadusuario.Cuidad.PaisID} ");
                            }

                        }


                        break;

                    case "7":
                        // Imprimir paises
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            var paises = bd.Paises.ToList();

                            foreach (var p in paises)
                            {
                                Console.WriteLine($"{p.Nombre}");
                            }
                        }
                        break;

                    case "8":
                        // Imprimir paises
                        using (var bd = new MySQL.Data.MySQLContext())
                        {
                            var cuidades = bd.Cuidades.ToList();

                            foreach (var c in cuidades)
                            {
                                Console.WriteLine($"{c.Nombre}");
                            }
                        }
                        // Imprimir cuidades
                        break;



                    default:
                        ImprimirMenu();
                        break;
                }



            }

        }
    }
}
