const cookieParser = require('cookie-parser');
//$2b$10$LGHrD5ZYZ0Dpj5h6tfWBKuFuW3KSBKNIafVXa7nKa2eqtC3L9CeLO
//pollollo
const express = require('express');
const app = express();
const bcrypt = require('bcrypt')
const jwt = require('jsonwebtoken');
app.use(cookieParser());
app.get("/", function (req, res) {
  let token = jwt.sign({ email: "ayush@example.com" }, "secret")
  res.cookie("token", token)
  res.send("Done")
})
app.get("/read", function (req, res) {
  let data = jwt.verify(req.cookies.token, "secret")
  console.log(data);
})
app.listen(3000);