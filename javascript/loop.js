let marks = {
Ayaan : 523,
Afaan : 345,
Awais : 234,

}
//console.log(marks);
//console.log(marks[Object.keys(marks)[0]]);
// I want to print values of the marks
for (i=0; i<Object.keys(marks).length; i++)
{
console.log("Marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]] + "")
}
console.log(Object.keys(marks)[1]);
//console.log(marks[Object.keys(marks)[2]]);