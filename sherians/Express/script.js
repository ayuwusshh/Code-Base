
// setting up a basic react app. 
const express = require(`express`)
const app = express()
app.get('/', function (req, res) {
  res.send('Kya Re')
})
app.get('/profile', function (req, res) {
  res.send('Maara Jayegaaa')
})
app.listen(3000)
console.log('Running');
