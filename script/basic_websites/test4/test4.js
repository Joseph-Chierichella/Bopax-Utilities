console.log("Test 4 Webpage is currently running!");

const inputbox = document.getElementById("inputbox1");
const button = document.getElementById("button1");
const outputbox = document.getElementById("outputbox1");

function appendToOutput(text) {
    outputbox.value += text + '\n';
    outputbox.scrollTop = outputbox.scrollHeight;
}

function processCommand() {
    const command = inputbox.value.trim();
    appendToOutput(`MyTerminal~: $ ${command}`);

    const lowerCaseCommand = command.toLowerCase();

    if (lowerCaseCommand === 'hello') {
        appendToOutput("Computer: Hello there!");
    } else {
        appendToOutput("Computer: Command not recognized.");
    }

    inputbox.value = '';
}

button.onclick = processCommand;

inputbox.addEventListener('keydown', function(event) {
    if (event.key === 'Enter') {
        event.preventDefault();
        processCommand();
    }
});

appendToOutput("Welcome to MyTerminal. Type 'hello' and press Enter or click Run.");