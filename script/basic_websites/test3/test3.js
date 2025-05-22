//let hello = "Hello World!";

//document.getElementById("header1").textContent = hello;



//username = window.prompt("What is your username?");

let username;

document.getElementById("mySubmit").onclick = function() {
    username = document.getElementById("myText").value;
    console.log(username);
    document.getElementById("myH1").textContent = `Hello there ${username}`
}