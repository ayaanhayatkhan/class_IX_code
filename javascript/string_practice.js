//Practice set

let str = "Ayaan\""
console.log(str.length)


const sentence = "The quick brown fox jumps over the lazy dog.";

const word = "fox";
console.log(sentence.includes(word))

console.log(
  `The word "${word}" ${
    sentence.includes(word) ? "is" : "is not"
  } in the sentence`,
);

let str1 = "Please give him RS 500"
len = str1.length
console.log("The length of the string is "+len)
let amount = Number.parseInt(str1.slice(19))
console.log(amount)
amount = amount + 100
console.log(amount)
//console.log(typeof amount)
