//let hello = "Hello World!";

//document.getElementById("header1").textContent = hello;



//username = window.prompt("What is your username?");

let num1;
let num2;
let myH2 = document.getElementById("myH2");

document.getElementById("submit1").onclick = function() {
    num1 = Number(document.getElementById("myText1").value);
    console.log("First number entered:", num1);
};

document.getElementById("submit2").onclick = function() {
    num2 = Number(document.getElementById("myText2").value);
    console.log("Second number entered:", num2);
};

document.getElementById("submit3").onclick = function() {
    if (typeof num1 === 'number' && typeof num2 === 'number') {
        let num3 = num1 + num2;
        myH2.textContent = `${num1} + ${num2} = ${num3}`;
    } else {
        myH2.textContent = "Please enter both numbers.";
    }
};