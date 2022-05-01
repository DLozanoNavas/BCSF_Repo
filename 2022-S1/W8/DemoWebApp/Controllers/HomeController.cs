using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using DemoWebApp.Models;

namespace DemoWebApp.Controllers;

public class HomeController : Controller
{
    private readonly ILogger<HomeController> _logger;

    public HomeController(ILogger<HomeController> logger)
    {
        _logger = logger;
    }

    public IActionResult Index()
    {



        return View();
    }

    public IActionResult Privacy()
    {
        return View();
    }

    [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
    public IActionResult Error()
    {
        var response = new ErrorViewModel { RequestId = "Hola Mundo!" };
        return View(response);
    }
}
