using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using IFormFileTest.Models;

namespace IFormFileTest.Controllers
{
    public class FilesController : Controller
    {
        private readonly ILogger<HomeController> _logger;
        private MyLittleClass MyLittleClassHelper { get; set; }

        public FilesController(ILogger<HomeController> logger, MyLittleClass myLittleClassHelper)
        {
            _logger = logger;
            MyLittleClassHelper = myLittleClassHelper;
        }
        [HttpGet]
        public async Task<IActionResult> Form()
        {

            return View();
        }
        [HttpPost]
        // Files/Submit
        public async Task<IActionResult> Submit([Bind("ID,FileName,TmpFile,TmpFiles,URL,PersonaID")] FileUpload Upload)
        {
            Console.WriteLine(Upload.FileName);
            var archivo = Upload.TmpFile;
            var archivos = Upload.TmpFiles;
            return View();
        }
    }
}
