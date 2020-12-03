const express = require('express')
const app = express()

app.get('/', function (req, res) {
    res.send('Hello World')
})

// Loosely Typed

app.listen(3000)