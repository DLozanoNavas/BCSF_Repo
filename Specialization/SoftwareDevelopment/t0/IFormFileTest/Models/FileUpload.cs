using System;
using System.Threading.Tasks;
using System.Net.Http;
using Microsoft.AspNetCore.Http;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;

namespace IFormFileTest.Models
{

    public class FileUpload
    {

        public string ID { get; set; }
        public string FileName { get; set; }
        public string URL { get; set; }

        public string PersonaID { get; set; }
        public Persona Persona { get; set; }

        [NotMapped]
        public IFormFile TmpFile { get; set; }
        
        [NotMapped]
        public List<IFormFile> TmpFiles { get; set; }


    }


}