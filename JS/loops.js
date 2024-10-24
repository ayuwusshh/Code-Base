console.log("lets loop")
let a=5;
for (let a = 0; a <= 10; a++) {
    console.log(a)
}
let obj={
    name: "Ayush",
    role: "Developer",
    company:"LMS"
}
for (const key in obj) {       // for object
   console.log(key)
}
for (const element of "Ayush") {        // for array
    console.log(element)
}
let i=0;
while(i<6){
    console.log(i)
    i++;
}
const student = {
    harry: 98,
    rohan: 70,
    aakash: 7
};
for (const key in student) {
    if (Object.prototype.hasOwnProperty.call(student, key)) {
        const element = student[key];
        console.log(`${key} - ${element}`);
    }
}
