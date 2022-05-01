using System;
using Microsoft.Bot.Builder.TraceExtensions;
using Microsoft.Bot.Builder.Integration.AspNet.Core;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.Logging;
using System.Net.Http;

namespace BotApi1
{

    public class AdaptadorConManejadorErrores : CloudAdapter
    {
        public AdaptadorConManejadorErrores(
            IConfiguration configuration,
            IHttpClientFactory httpClientFactory,
            ILogger<IBotFrameworkHttpAdapter> logger
        ) : base(configuration, httpClientFactory, logger)
        {
            OnTurnError = async (turnContext, exception) =>
            {
                logger.LogError(exception, $"Error: {exception}");


                await turnContext.SendActivityAsync("He encontrado un error y no puedo atender tu solicitud ahora mismo.");
                await turnContext.SendActivityAsync("Lamentamos las molestias.");


                await turnContext.TraceActivityAsync("OnTurn Trace", exception, "https://www.botframework.com/schemas/error", "TurnError");
            };
        }
    }

}