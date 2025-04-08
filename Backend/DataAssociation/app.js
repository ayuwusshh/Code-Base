const express = require('express');
const app = express();
const userModel = require("./models/user");
const postModel = require("./models/post");
app.get("/", function (req, res) {
  res.send("hey")
})
app.get("/create", async function (req, res) {
  let user = await userModel.create({
    username: "Ayush",
    age: 25,
    email: "ayush@gmail.com"
  });
  res.send(user)
})
app.get("/post/create", async function (req, res) {
  let post = await postModel.create({
    postdata: "hello ji",
    user: "67f4987547d3f60ea1aa6497",
  })
  let user = await userModel.findOne({ _id: "67f4987547d3f60ea1aa6497" });
  user.posts.push(post._id);
  await user.save();
  res.send({ post, user })
})
app.listen(3000); 