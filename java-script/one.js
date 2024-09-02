var a ;
console.log(a);
a = 10;
console.log(a);
a = "Hellow Rishika "
console.log(a);


const arr = [1,2,3,4,5,5,12,5]
function findMax(arr){
    let max = 0;
    for(let i = 0; i < arr.length;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    return max;
}
console.log(findMax(arr));
let output2 = arr.reduce(function(max, curr){
    if(curr>max){
        max = curr;
    }
    return max;
},0);
console.log(output2);
