using System;
using System.Threading.Tasks;
using System.Net.Http;

namespace IFormFileTest.Models {

    public class MyLittleClass {

        public async Task LlamarServicioWeb(){
            using (var _webClient = new HttpClient()){
                var respuesta = await _webClient.GetStringAsync("https://rest.absuite.net/api/v2/currencies");
                Console.WriteLine(respuesta);
            }
        }


    }


}