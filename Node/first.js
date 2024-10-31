console.log('Ayush');
const fs = require('fs');
fs.writeFile("output.txt", "Writing file", (err) => {
  if (err) console.log('Error occured');
  else console.log('Writtng succesful');
})