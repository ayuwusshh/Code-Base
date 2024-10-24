// Generate a random number between 0 and 1
let random = Math.random();

// Prompt the user to enter the first number and parse it as a float
let a = parseFloat(prompt("Enter the first number"));

// Prompt the user to enter the operation
let c = prompt("Enter the operation");

// Prompt the user to enter the second number and parse it as a float
let b = parseFloat(prompt("Enter the second number"));

// Define an object that maps operations to their respective functions
let operations = {
    "+": (x, y) => x + y,   // Addition
    "-": (x, y) => x - y,   // Subtraction
    "*": (x, y) => x * y,   // Multiplication
    "/": (x, y) => x / y,   // Division
    "**": (x, y) => x ** y  // Exponentiation
};

// Define an object that maps operations to their alternate operations
let alternateOperations = {
    "+": "-",   // Addition becomes Subtraction
    "*": "+",   // Multiplication becomes Addition
    "-": "/",   // Subtraction becomes Division
    "/": "**"   // Division becomes Exponentiation
};

// If the random number is less than or equal to 0.1, use the alternate operation
if (random <= 0.1) {
    c = alternateOperations[c];
}

// Compute the result using the appropriate operation function
let result = operations[c](a, b);

// Display the result to the user
alert(`The result is ${result}`);