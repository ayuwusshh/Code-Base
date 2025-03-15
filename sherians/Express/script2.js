// Middleware
const express = require(`express`)
const app = express()
app.use(express.json) // converts json based data into readable format
app.use(express.urlencoded({ extended: true }));  // converts url based data into readable format
app.use(function (req, res, next) {   //runs before every request
  console.log('Middleware running');
  next();
});
app.use(function (req, res, next) {
  console.log('Middleware running again ');
  next();
});

app.get('/', function (req, res) {
  res.send('Kya Re.....Maara Jayega')
})
app.use(function (req, res, next) {
  console.log('Middleware running for about ');
  next();
});

app.get('/about', function (req, res) {
  return next(new Error("Not implementas"));
})
app.use((err, req, res, next) => {
  console.error(err.stack)
  res.status(500).send('Something broke!')
})
app.listen(3000)
