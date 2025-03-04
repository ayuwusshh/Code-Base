//Fundamentals of Js
// arrays and object
// functions return
//async 

console.log('Arrays hai niche');

//forEach-->iterating through each value in the array
var arr = [1, 2, 3, 4, 8, 6];
arr.forEach(function (val) {
  console.log(val + " Hello");
})
//map-->creating new array from existing array
map = arr.map(function (val) {
  return val + 12;
})
console.log(map);

//filter-->filtering data in the array
filter = arr.filter(function (val) {
  return val > 3
})
console.log(filter);

//find --> finding data in array
find = arr.find(function (val) {
  return val === 2
})
console.log("Found " + find);

//find --> finding data in array
index = arr.indexOf(function (val) {
  return val === 3
})
console.log("Index " + index);

//objects
console.log('Objects hai niche');
var obj = {
  name: "Ayush",
  age: 21,
}
console.log(obj.name, obj.age);
//freeze the value
Object.freeze(obj);


//async functions 