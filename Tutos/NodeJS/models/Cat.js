const mongoose = require("mongoose")
var Schema = mongoose.Schema;

// Creando modelo gato

catSchema = new Schema(
    {
        name:{type:String, required:true}
    }
)

module.exports = mongoose.model("Cat", catSchema );
