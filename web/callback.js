// Defining the callback function
function callbackFunction(result) {
    console.log("Callback received result: " + result);
}

// Function that takes another function (callback) as an argument
function doMathOperation(a, b, callback) {
    let result = a + b;
    // Call the callback function with the result
    callback(result);
}

// Calling the function and passing the callback
doMathOperation(5, 10, callbackFunction);
