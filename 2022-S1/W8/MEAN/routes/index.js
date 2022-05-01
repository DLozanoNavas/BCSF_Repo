var express = require("express");
var router = express.Router();

router.get('/', function(req, res, next){
    res.send("Mi primera respuesta");
});

module.exports = router;