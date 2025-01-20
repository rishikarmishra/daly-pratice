// Using an anonymous function to square numbers in an array
let numbers = [1, 2, 3, 4, 5];

// Squaring each number using an anonymous function
let squaredNumbers = numbers.map(function(num) {
    return num * num;
});

console.log(squaredNumbers);
