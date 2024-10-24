const fs = require("fs")

console.log('starting');
// fs.writeFileSync("ayush.txt","Rao jiSaaab")

fs.writeFile("ayush2.txt","Ayo sigmaa",()=>{
    console.log('done');
    fs.readFile("ayush2.txt",(error,data)=>{
        console.log(error,data.toString());
    })
})
fs.appendFile("ayush.txt","ayushrobo",(e,d)=>{
    console.log(d)
})
console.log('ending');
