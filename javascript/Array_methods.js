/*let a = [12 , 23 , 43, true , "Hello", false ]
console.log(a[0])
console.log(a[1])
console.log(a[2])
console.log(a[3])
console.log(a[4])
console.log(a[5])
console.log(typeof a)
console.log("The length of array is",a.length)*/


// Array Method
/*let a = [1 , 2 , 3 , 6 ]
let b = a.toString()
console.log(b, typeof b)

let c = a.join("*")
console.log(c, typeof c)

let d = a.pop()
console.log(d, typeof d)

let e = a.push(6)
console.log(e, typeof e)

let f = a.shift()
console.log(f)

let g = a.unshift(8)
console.log(g, typeof g)*/


let num = [1 , 2 , 3 , 4 , 5 , 6, 7 , 8 , 9]
let num_more = [11, 12, 13, 14, 15, 16, 17, 18, 19 ]
let num_even_more = [21, 22, 23, 24, 25, 26, 27, 28, 29]
//console.log(num_more)
//console.log(num.length)
//delete num[0]

let newarray = num.concat(num_more,num_even_more)
console.log(newarray)
console.log(num,num_more)

// sort method
let compare = (a , b)=>{
return b-a

}

let num_1 = [53, 34, 23, 42, 24,]
num_1.sort(compare)
console.log(num_1)

let r = num.shift()
console.log(r,num)



