var app = require("../index")
var http = require("http")

var puerto = NormalizarPuerto(process.env.PORT || "3000")

app.set("port", puerto)

var servidor = http.createServer(app)

servidor.listen(puerto)


servidor.on("error", ManejadorErrores)
servidor.on("listening", manejadorInicio)

function NormalizarPuerto(puerto){
    var puertoNormalizado = parseInt(puerto, 10);

    if(isNaN(puerto)){
        return puerto;
    }
    if(puerto >= 0){
        puertoNormalizado;
    }

    return 3000;
}

// Crear un manejador de eventos. (¿Qué pasa cuando algo falla?)
function ManejadorErrores(error){
    if(error.syscall !== "listen"){
        throw error;
    }
    console.log("Error manejado correctamente:")
    console.log(error)
}


function manejadorInicio(){
    var direccion = servidor.address();
    var ruta = typeof direccion === 'string' ? "Dirección: " + direccion : "Dirección: " + direccion.port;
    console.log("Servidor escuchando en: " + ruta)
}

