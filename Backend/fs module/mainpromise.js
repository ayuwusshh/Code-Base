import fs from "fs/promises"
let a=await fs.readFile("ayush.txt")
let b=await fs.writeFile("ayush.txt","\n\n\n\n this is raaosaab")
console.log(a.toString(),b);
