// async function getData(){   // async runs the function in bg while other codes are executed
//   // getData() simulate getting data from  a server
//     return new Promise((resolve,reject)=>{
//         setTimeout(() => {
//             resolve(455);
//         }, 5000);
//     })
// }
async function getData(){ 
    // getData() simulate getting data from  a server
   let x= await fetch('https://jsonplaceholder.typicode.com/todos/1')
    let data=await x.json()
   console.log(x);
  }
async function main() {
    console.log('Loading Modules');
console.log('Do something else');
console.log('Load data');
let data=await getData()    //await waits for the async function to load
console.log(data);
console.log('Process data');
console.log('task 2');
}
main()