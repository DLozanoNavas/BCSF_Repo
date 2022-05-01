var mongoose = require('mongoose');
var schema = mongoose.Schema;


userSchema = new schema({
    name:{type:String, required:true},
    email:{type:String, required:true}
})

module.exports = mongoose.model("User", userSchema);