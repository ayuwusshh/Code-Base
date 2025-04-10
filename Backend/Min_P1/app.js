const express = require('express');
const app = express();
const userModel = require("./models/user")
const postModel = require("./models/post")
const cookieParser = require('cookie-parser')
const jwt = require('jsonwebtoken')
const bcrypt = require('bcrypt')
app.set("view engine", "ejs");
app.get("/", (req, res) => {
  res.render("index");
})
app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.post('/register', async (req, res) => {
  let { email, password, username, name, age } = req.body;
  let user = await userModel.findOne({ email })
  if (user) return res.status(500).send("User already registered");
  bcrypt.genSalt(10, (err, salt) => {
    bcrypt.hash(password, salt, async (err, hash) => {
      let user = await userModel.create({
        name,
        username,
        password: hash,
        email,
        age
      });
      let token = jwt.sign({ email: email, userid: user._id }, "shhhh");
      res.cookie("token", token);
      res.send("registered")
    })
  })
});
app.get("/login", (req, res) => {
  res.render("login");
})
app.post('/login', async (req, res) => {

});
app.listen(3000); 