const radius = [ 2,3,4,5];
const calculateArea = function(radius){
    let output = [];
    for (i=0;i< radius.length;i++){
        output.push(Math.PI *radius[i]*radius[i])
    }
    return output;
};
console.log(calculateArea(radius));
const calcualteCurcumference = function(radius){
    let output = [];
    for(i = 0; i < radius.length;i++){
        output.push(2 * Math.PI *radius[i]);
    }
    return output;
}
console.log(calcualteCurcumference(radius));
const calculateDiameter = function(radius){
    let output = [];
    for(i = 0;i<radius.length;i++){
     output.push(2*radius[i]);   
    }
    return output;
}
console.log(calculateDiameter(radius));