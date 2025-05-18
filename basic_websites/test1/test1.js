document.getElementById("submit1").onclick = function() {
	let number1 = Number(document.getElementById("input1").value);
	let number2 = number1 + 1;
	document.getElementById("header1").textContent = `${number1} + 1 = ${number2}`;
};

