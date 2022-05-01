using System;
using Microsoft.Bot.Builder;
using Microsoft.Bot.Schema;
using System.Threading;
using System.Threading.Tasks;
using System.Collections.Generic;

namespace BotApi1.Bots
{

    public class MiPrimerBot : ActivityHandler
    {
        protected override async Task OnMembersAddedAsync(
            IList<ChannelAccount> nuevosMiembros,
            ITurnContext<IConversationUpdateActivity> turnContext,
            CancellationToken cancelationToken
            )
        {

            var mensajeBienvenida = "Bienvenidos a esta conversación. Soy un bot conversacional llamado Andy.";

            foreach (var miembro in nuevosMiembros)
            {
                if (miembro.Id != turnContext.Activity.Recipient.Id)
                {
                    await turnContext.SendActivityAsync(MessageFactory.Text(mensajeBienvenida, null), cancelationToken);
                }
            }
        }

        protected override async Task OnMessageActivityAsync(ITurnContext<IMessageActivity> turnContext, CancellationToken cancelationToken)
        {
            var respuesta = $"Dijiste: {turnContext.Activity.Text}";

            await turnContext.SendActivityAsync(MessageFactory.Text(respuesta, null), cancelationToken);

        }

    }

}