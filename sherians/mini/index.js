const express = require('express');
const app = express();
const path = require('path');
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, 'public')));
app.set('view engine', 'ejs')
app.get("/", function (req, res) {
  res.render("index");
})
app.get("/profile/:Username", function (req, res) {
  res.send(req.params.Username);
})
app.get("/profile/:Username/:age", function (req, res) {
  res.send(`Name ${req.params.Username}, Age ${req.params.age}`);
})
app.listen(3000, function () {
  console.log('Its running');
});