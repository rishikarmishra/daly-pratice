const arr = [5,1,3,2,6]
//sum or max
//without reduce function
function findSum (arr) {
    sum = 0;
    for(let i=0;i<arr.length;i++){
        sum = sum + arr[i];
    }
    return sum;
}
console.log(findSum(arr)); 

const output = arr.reduce(function(acc,curr){
    acc = acc + curr;
    return acc;
},0);
console.log(output);
//max
function findMax(){
    let max = 0;

}