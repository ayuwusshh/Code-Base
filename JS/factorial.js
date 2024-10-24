let arr=[1,2,3,4,5,6]
const fact=arr.reduce((next,current)=>{
    return current*next
},1);
console.log(fact);

