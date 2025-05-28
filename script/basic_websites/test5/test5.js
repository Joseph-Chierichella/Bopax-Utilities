console.log("test5.js is succefuly connected");

const input2 = document.getElementById('input1');
const run2 = document.getElementById('run1');
const text2 = document.getElementById('text1');

let output = "";
const findent = "     ";
const fline = "----------------------------------------------------------------";


function runFunction() {
	console.clear();
	if (input2.value === "Marco") {
		console.log("Polo");
		output = "Polo";
	}else if (input2.value === "Hello" || input2.value === "hello") {
		console.log("What's up");
		output = "What's up";
	}else if (input2.value === "clear") {
		clearTextArea();
		output = `Terminal has ben cleared! \n ${findent}You can also use the clear button!`;
	}else if (input2.value === "time" || input2.value === "Time") {
		const time = new Date();
		console.log(time);
		output = `${time}`;
	}else {
		console.error(`'${input2.value}' Error 02`);
		output = "Error || 02";
	}

}

function addTextToTextArea()
{
	const newText = `test5~$${input2.value}\n ${findent}${output}\n ${fline}\n`
	text2.value += newText
}

function clearTextArea() {
	text2.value = "";
}

clearButton.addEventListener('click', clearTextArea);
run2.addEventListener('click', runFunction);
run2.addEventListener('click', addTextToTextArea);
