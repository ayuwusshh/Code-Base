let a =prompt("Enter first number")
let b= prompt("Enter second number")
if (isNaN(a) || isNaN(b)) {
    throw SyntaxError("Sorry this is not allowed");
}
let sum=parseInt(a) + parseInt(b)
function main() { 
    let x=1
    try {   //code gets executed
        console.log("The sum is",sum*x)
        return true
    } catch (error) {   // if try throws error, catch block catches it and handles the error
        console.log('Error agya bhai');
        return false
    }
    finally{    // makes the code after the return statement
        console.log('files are being closed and db connection is being closed');
    }
}
let c=main()