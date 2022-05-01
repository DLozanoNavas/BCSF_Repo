using System;
using System.Net.Http;
using Newtonsoft.Json;
using System.Collections.Generic;
using Cliente.Modelos;

namespace ClienteRest
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var cliente = new HttpClient())
            {
                //var respuesta = cliente.GetStringAsync("https://restcountries.eu/rest/v2/all").GetAwaiter().GetResult();

                //List<ClienteRest.Paises> paises = new List<Paises>();
                //paises = JsonConvert.DeserializeObject<List<Paises>>(respuesta);


                //for(int i = 0; i < paises.Count; i++)
                //{
                //    Console.WriteLine($"Pais: {paises[i].Name} - Capital: {paises[i].Capital}");
                //}


                List<Clima> Climas = new List<Clima>();
                var respuestaClimas = cliente.GetStringAsync("https://localhost:5001/WeatherForecast").GetAwaiter().GetResult();


                Climas = JsonConvert.DeserializeObject<List<Clima>>(respuestaClimas);


                foreach(Clima c in Climas)
                {
                    Console.WriteLine($"C°: {c.TemperatureC} F°: {c.TemperatureF} Resumen_ {c.Summary}");
                }

            }
        }
    }
}
