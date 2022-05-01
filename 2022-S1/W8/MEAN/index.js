var express = require("express");
var path = require("path");
var logger = require("morgan");
var bodyParser = require("body-parser");
var cookieParser = require("cookie-parser");


var index = require("./routes/index");
var users = require("./routes/users");

var User = require("./Models/User")
var app = express();

var mongoose = require("mongoose");

// TODO: Agregar las credenciales
var connection = mongoose.connect("mongodb://localhost:27017/test");


if(connection){
    console.log("MongoDB está conectado con éxito.");
}else{
    console.log("No se pudo conectar a MongoDB.");
}



app.use(logger('dev'));
app.use(bodyParser.json());
app.use(cookieParser());

// Crear rutas de nuestra app

app.use(express.static(path.join(__dirname, 'public')));

app.set("views", path.join(__dirname, 'views') );
app.set("view engine", "pug");

app.use('/', index);
app.use('/users', users);


// Ver usuarios
app.post("/contactlists", function(req, resp){
    User.find()
    var tablaUsuarios = new User(req.body);
    tablaUsuarios.save(function(err, docs){
        console.log(docs);
        resp.json(docs);
    })
});

app.get("/contactlists", function(req, res){

    User.find(function(err, docs){
        console.log(docs);
        res.json(docs);
    })

});


app.post('/contactlists', function(req,res){
    var userTable = new User(req.body);
    usertable.save(
        function(err, docs){
            res.json(docs);
        }
    )
});


app.delete('/contactlists/:id', function (req, res) {
    var id = req.params.id;

    User.remove({_id:id}, function(err,doc){
        if(err){
            console.log("Algo salió terriblemente mal");
        }
        res.json(doc);
    })
});


app.use(function (req, res, next){
    var err = new Error('Not Found');
    err.status = 404;
    next(err);
})


app.use(function(err, req, res, next){
    res.locals.message = err.message;
    //res.locals.error = req.app.get('env") === "development" ? err : {};
    res.locals.error = true;

    res.status(err.status || 500);
    res.render("error");

});

module.exports = app;