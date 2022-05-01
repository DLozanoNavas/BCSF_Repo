using DemoWebApp.Data;

using Microsoft.EntityFrameworkCore;

var builder = WebApplication.CreateBuilder(args);

// Registra la Base de datos en el sistema de Inyección de Dependencias
builder.Services.AddDbContext<DataContext>(options => options.UseMySql("Server=localhost; Port=3306; Database=DemoStore; Uid=itfenixalliance; Pwd=C6@6N?2R!sMr=2Ve; SslMode=Preferred;Convert Zero Datetime=True", ServerVersion.AutoDetect("Server=localhost; Port=3306; Database=ABSuite1; Uid=itfenixalliance; Pwd=C6@6N?2R!sMr=2Ve; SslMode=Preferred;Convert Zero Datetime=True")));

// Add services to the container.
builder.Services.AddControllersWithViews();

var app = builder.Build();

// Configure the HTTP request pipeline.
if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Home/Error");
    // The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
    app.UseHsts();
}

app.UseHttpsRedirection();
app.UseStaticFiles();

app.UseRouting();

app.UseAuthorization();

app.MapControllerRoute(
    name: "default",
    pattern: "{controller=Home}/{action=Index}/{id?}");

app.Run();

