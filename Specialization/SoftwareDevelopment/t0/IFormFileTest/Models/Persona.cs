using System;
using System.Threading.Tasks;
using System.Net.Http;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;

namespace IFormFileTest.Models
{

    public class Persona
    {
        [Key]
        public string ID { get; set; }
        public string Name { get; set; }
        public List<FileUpload> FileUploads  { get; set; }


    }


}