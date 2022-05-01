const express = require('express')
const path = require("path")
var cookieParser = require('cookie-parser')
var bodyParser = require('body-parser')
const app = express()

app.use(bodyParser.json())
app.use(cookieParser())

const mongoose = require('mongoose')
var Cat = require("./Models/Cat")

app.use(express.static(path.join(__dirname, "public") ))

// Conectar a MongoDB
mongoose.connect('mongodb+srv://user:ZSgZ32QubujqS2xB@democluster.lx5dq.mongodb.net/demo?retryWrites=true&w=majority', {
    useNewUrlParser: true,
    useUnifiedTopology: true,
    useFindAndModify: false,
    useCreateIndex: true
});

var index = require("./routes/index")

app.get('/', function (req, res) {
    res.send('Hello World')
})

app.get('/CrearPelusas', function (req, res) {
    const kitty = new Cat({ name: 'Pelusas' });
    kitty.save().then(() => console.log('meow'));
})

app.post('/CrearGatito', function (req, res) {
    var nuevoGatito = new Cat(req.body);
    nuevoGatito.save(function(error, docs){
        if(error){
            console.log("Algo salió mal")
        }
        res.json(docs)
    })
})

app.delete('/BorrarGatito/:id', function (req, res) {
    var id = req.params.id;
    Cat.remove({_id: id}, function(error, docs ){
        if(error){
            console.log("añgp salió mal")
        }
        res.json(docs)
    })
})

app.get('/MostrarGatitos', function (req, res) {
    Cat.find(function (error, docs){
        if (error){
            console.log("Algo salió mal");
        }
        console.log(docs)
        res.json(docs)
    })
})

app.get('/ObtenerGatito/:id', function (req, res) {
    var id = req.params.id;
    var gato = req.body;
    
    Cat.find({_id: id}, function (error, docs) {
        if (error) { 
            console.log("Algo salió mal");
        }
        console.log(docs)
        res.json(docs)
    })
})

app.get('/Contacto', function (req, res) {
    res.send('Esta es la página de contacto')
})

// Middleware
app.use(function(req, res, next){
    var error = new Error('Not Found')
    error.status = 404;
    next(error)
})


module.exports = app;