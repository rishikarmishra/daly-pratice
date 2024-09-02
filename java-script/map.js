arr = [1,2,3,4];
const output = arr.map((x)=>{
    return 2*x;
})
console.log(output);
function double(x){
    return 2*x;
}
const output2 = arr.map(double);
console.log(output2)
function triple (x){
    3*x;
}
const output3 = arr.map(triple);
function binary(x){
   return x.toString(2);
}
const output4 = arr.map(binary);
console.log(output4);
const outpput5 = arr.map((x)=>{ return x.toString(2)})
console.log(outpput5)
//Filter
