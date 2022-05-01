using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using Microsoft.Bot.Builder;
using Microsoft.Bot.Builder.Integration.AspNet.Core;


namespace BotApi1.Controllers
{
    [ApiController]
    [Route("api/mensajes")]
    public class BotController : ControllerBase
    {

        public IBot _bot { get; set; }
        public IBotFrameworkHttpAdapter _adapter { get; set; }
        public BotController(IBotFrameworkHttpAdapter adapter, IBot bot)
        {
            _bot = bot;
            _adapter = adapter;
        }

        [HttpPost, HttpGet]
        public async Task Get()
        {
            await _adapter.ProcessAsync(Request, Response, _bot);
        }
    }
}
