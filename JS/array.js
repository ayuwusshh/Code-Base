let arr = [1, 2, 8, 4, 6]
console.log(arr);
console.log(arr.length, typeof (arr));
arr[1] = 5
console.log(arr);
console.log(arr.toString());
console.log(arr.join(" and "));
let a = [2, 5, 3, 44, 6]
newArr = a.map((e) => {
    return e ** 2
})
console.log(newArr);
const greaterThanSeven = (e) => {
    if (e > 7) {
        return true
    }
    return false
}
console.log(newArr.filter(greaterThanSeven));
