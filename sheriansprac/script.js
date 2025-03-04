const fs = require('fs')

fs.writeFile("Hey.txt", "Ayush Singh Rajput", function (err) {
  if (err) console.log(err);
  else console.log('Done');
})

fs.readFile("Hey.txt", function (err, data) {
  if (err) console.log(err.message);
  else console.log(data.toString());
})