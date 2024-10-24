 // callback is basically a function that runs inside a function
 console.log("Ayush is hacker");
 console.log("Rohan is hecker");
 setTimeout(()=>{
    console.log("I am inside timeout"); //asynchronus nature last me print
 },2000);
 console.log("The end"); 

//  const callback = (name) => {
//    console.log(name);  // This will print "Ayush"
//  };
 
//  const loadScript=(src, callback)=>{
//     let sc=document.createElement("script");
//     sc.src=src;
//     sc.onload = callback("hero");
//    document.head.append(sc)
//  }
//  loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js", callback)
 
//   const a(arg fn) =>({
//    console.log(arg)
//    fn("firstarg", ()=>{
//       ddg("second",()=>{   // callback inside callbacks can be toughcan be tough
//          })                // to manage,so we use promises
//       })
// })
  
const callback=(name)=>{
   console.log(name);
}
const loadScript=(src,callback)=>{
   let sc=document.createElement("script");
   sc.src=src
   sc.onload =() =>{
      callback("hero")}
   document.head.append(sc)
}
loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js",callback)