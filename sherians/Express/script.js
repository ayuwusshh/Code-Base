/*
Express js tutorial
Express js is a framework and a n npm package 
framework--> gives a flow to use an existing tech
it manages everyhting from receiveing the request and giving response
*/
// setting up a basic react project 
const express = require('express')
const app = express()

app.get('/', function (req, res) {
  res.send('Idli Dosa')
})

app.listen(3000)