var app = require("../index");
var http = require("http");


var port = normalizePort(process.env.PORT || "3000");

app.set("port", port);


var server = http.createServer(app);

server.listen(port);

server.on("error", ErrorHandler);
server.on("listenig", ListeningHandler);


function normalizePort(port){
    var normalizedPort = parseInt(port, 10);
    if(isNaN(port)){
        return port;
    }
    if( port >= 0){
        return normalizedPort;
    }
    return false;
}

function ErrorHandler(error){
    if(error.syscall !== "listen" ){
        throw error;
    }
}


function ListeningHandler(){
    var dir = server.address();
    var ruta = typeof dir === 'string' ? "Dir: " + dir : "Puerto:" + dir.port;

    console.log("Servidor escuchando en:" + ruta);
}

