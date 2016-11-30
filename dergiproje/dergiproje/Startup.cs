using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(dergiproje.Startup))]
namespace dergiproje
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
