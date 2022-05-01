using System;
using System.Net.Http;
using Newtonsoft.Json;
using System.Collections.Generic;

namespace ClienteRest
{
    class Program
    {
        static void Main(string[] args)
        {

            using (var cliente = new HttpClient()) {
                var respuesta =  cliente.GetStringAsync("https://restcountries.eu/rest/v2/all").GetAwaiter().GetResult();

                // List<ClienteRest.Paises> paises = new List<Paises>();
                //List<Paises> paises = JsonConvert.SerializeObject<Paises>.FromJson(respuesta);
            }

        }
    }
}
