console.log('ayush'); // Log 'ayush' to the console

let prom1 = new Promise((resolve, reject) => { // Create a new Promise
    let a = Math.random(); // Generate a random number between 0 and 1

    if (a < 0.5) { // If the number is less than 0.5
        reject(`No, random number is not supporting you`); // Reject the Promise with a message
    } else { // If the number is 0.5 or more
        setTimeout(() => { // Wait for 3 seconds
            console.log(`Yes, I am done`); // Log a success message
            resolve(`Ayush`); // Resolve the Promise with 'Ayush'
        }, 3000); // 3000 milliseconds = 3 seconds
    }
});
let prom2 = new Promise((resolve, reject) => { // Create a new Promise
    let a = Math.random(); // Generate a random number between 0 and 1

    if (a < 0.5) { // If the number is less than 0.5
        reject(`No, random number is not supporting you 2`); // Reject the Promise with a message
    } else { // If the number is 0.5 or more
        setTimeout(() => { // Wait for 3 seconds
            console.log(`Yes, I am done 2`); // Log a success message
            resolve(`Ayush 2`); // Resolve the Promise with 'Ayush 2'
        }, 1000); // 1000 milliseconds = 1 second
    }
});/*
Promise.all will only give output when all the promises are resolved
let p3 = Promise.all([prom1, prom2]); // Create a new Promise that waits for both prom1 and prom2
p3.then((a) => { // When both Promises are resolved
    console.log(a); // Log the array of resolved values
})
.catch(e => { // If any of the Promises is rejected
    console.log(e); // Log the error message
});*/
//Promise.all will only give output when either or both  the promises are resolved or rejected
let p3 = Promise.allSettled([prom1, prom2]); // Create a new Promise that waits for either prom1 or prom2
p3.then((a) => { // When either or both Promises are resolved
    console.log(a); // Log the array of resolved values
})
.catch(e => { 
    console.log(e); // Log the error message
});