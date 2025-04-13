const multer = require("multer");
const crypto = require("crypto");
const path = require('path')
// disk storage setup
const storage = multer.diskStorage({
  destination: function (req, file, cb) {
    cb(null, './public/images/uploads')
  },
  filename: function (req, file, cb) {
    crypto.randomBytes(12, function (err, name) {// name is a buffer, convert to string
      const fn = name.toString("hex") + path.extname(file.originalname)// takes extenstion name from original file
      cb(null, fn);
    })
  }
})

// cerate and export upload variable
const upload = multer({ storage: storage })
module.exports = upload;