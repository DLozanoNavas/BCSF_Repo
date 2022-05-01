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
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;
        private MyLittleClass MyLittleClassHelper { get; set; }

        public HomeController(ILogger<HomeController> logger, MyLittleClass myLittleClassHelper)
        {
            _logger = logger;
            MyLittleClassHelper = myLittleClassHelper;
        }

        public async Task<IActionResult> Index()
        {

            await MyLittleClassHelper.LlamarServicioWeb();

            return View();
        }

        public async Task<IActionResult> Privacy()
        {
            await MyLittleClassHelper.LlamarServicioWeb();

            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public async Task<IActionResult> Error()
        {
            await MyLittleClassHelper.LlamarServicioWeb();

            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
