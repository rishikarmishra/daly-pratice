console.log("Namaste javascript")
setTimeout(function (){
    console.log("Rishika");
},5000);
console.log("last");
const GITHUB_API = "https://api.github.com/users/rishikaa17"
const user = fetch(GITHUB_API);
console.log(user);