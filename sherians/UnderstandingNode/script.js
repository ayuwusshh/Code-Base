const fs = require('fs');
/*
syllabus
-----------------
writefile
appendfile
copyfile
rename
unlink
*/

// writefile-->create a new  file with desired data
fs.writeFile("Kyare.txt", "Ayush Singh Rajput in the house", function (err) {
  if (err) console.log(err);
  else console.log('Done');
})

// appendfile-->add contents in the end in existing file
fs.appendFile("Kyare.txt", " Baby....", function (err) {
  if (err) console.log(err);
  else console.log('Done');
})
// rename-->rename a file
fs.rename("hey.txt", "Kyare.txt", function (err) {
  if (err) console.log(err);
  else console.log('done');
})

//copyfile
fs.copyFile("kyare.txt", "./copy/MaaraJayega.txt", function (err) {
  if (err) console.log(err.message);
  else console.log('Done');
})
//unlimk-->delete a file
fs.unlink("kyare.txt", function (err) {
  if (err) console.log(err.message);
  else console.log('Done');
})

fs.readFile("Kyare.txt", function (err, data) {
  if (err) console.log(err.message);
  else console.log(data.toString());
})