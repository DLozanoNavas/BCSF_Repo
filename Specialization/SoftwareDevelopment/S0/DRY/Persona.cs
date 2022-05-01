using System;

namespace DRY.Models{

    public class Persona{

        public string Nombres {get; set;}    
        public string Apellidos {get; set;}    


        public void CapturarDatos(){

            // Recibir los nombres
            Mensajes.ImprimirMensajeSolicitudPropiedad("nombre");
            this.Nombres = Console.ReadLine();

            Mensajes.ImprimirMensajeSolicitudPropiedad("apellido");
            this.Apellidos = Console.ReadLine();

            if (String.IsNullOrWhiteSpace(this.Nombres))
            {
                Mensajes.ImprimirMensajePropiedadFaltante("nombre");
                Mensajes.ImprimirMensajeCierre();
                return;
            }

            if (String.IsNullOrWhiteSpace(this.Apellidos))
            {
                Mensajes.ImprimirMensajePropiedadFaltante("apellidos");
                Mensajes.ImprimirMensajeCierre();
                return;
            }
        }

    }

}