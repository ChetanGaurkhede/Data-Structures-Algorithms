
// Ways to initialize the string---->

// 1️⃣ Creates a new empty string object (not the recommended way)
let string1 = new String("hello");

// 2️⃣ Creates a primitive string (best & most common way)
const string2 = "This is String2";

// 3️⃣ Creates a string using template literals (backticks)
//    This allows multiline strings & variable interpolation
const string3 = `${string1} is my name
Hello world
`;

// string1 was declared as const, so you can't reassign it
// string1 = "chetan";


// .length --> used to get length of the string

const strLength = string2.length


// .charAt --> used to access charector of string by using indexs

const charAt3 = string2.charAt(4)
console.log(charAt3);





