//const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Hey, what is your age? ", function (input) {
    let o = Number.parseInt(input);

    if (o > 3) {
        console.log("This is a valid age.");
    } else {
        console.log("This is an invalid age.");
    }

    rl.close();
});