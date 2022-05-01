var express = require("express")
var router = express.Router()


router.get("/", function(req, res, siguiente ){
    res.send("Esto funciona bien!");
})

module.exports = router;