using System;
using System.Data.SQLite;

namespace SQLite
{
    class Program
    {
        static void Main(string[] args)
        {
                SQLiteConnection conn = new SQLiteConnection(@"Data Source=.\Pelis.db");

                try {

                    conn.Open();

                } catch(Exception ex){
                    Console.WriteLine(ex.ToString());
                }

                SQLiteCommand cmd;

                string Select = "SELECT Title, Rank, Year FROM Pelis";

                cmd = conn.CreateCommand();
                cmd.CommandText = Select;
                var Respuesta = cmd.ExecuteReader();

                while(Respuesta.Read()){
                    
                    string linea = Respuesta.GetString(0);
                    linea += "," + Respuesta.GetString(1);
                    linea += "," + Respuesta.GetString(2);
                    Console.WriteLine(linea);
                }

                conn.Close();

        }
    }
}
