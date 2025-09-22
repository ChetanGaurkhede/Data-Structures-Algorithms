const newArr = new Array(); // this create new array using Array constructor

const arr = [1, 5, 8, 6, 5, 8, 3, 7];

// Operation on last element

arr.push(10) // Add new element at the end of the array - takes argument
arr.pop() // remove last element of the array

// Operation on first element

arr.unshift(10) // add new element at the first index
arr.shift() // remove first element of the array




//map, filter and reduce are higher order function

// map is return new array with having operation on each items of the array
const sqaur = arr.map((item) => {
  return item * item
})

//filter return new array with filtered value on given conditions
const filter = arr.filter((item) => {
  return item > 5
})

// reduce return a single value depent on the operation which take to parameters current and accumelate 
const reduce = arr.reduce((curr, acc) => {
  return curr + acc
}, 0)

// .some return boolean value if one of the element satsfy the condition
const some = arr.some((item) => {
  return item > 3
})  // true

// .every return boolean value if every items satisfy the condition
const every = arr.every((item) => {
  return item > 3
})  // false because every element should satisfy the condition

// Returns the value of the first element in the array where predicate is true, and undefined otherwise.
const find = arr.find((item) => {
  return item > 3
})

// spread [...arry] used to spread new array in current array
const num1 = [1, 2, 3]
const num2 = [4, 5, 6]
const newNum1 = [...num1, ...num2, ...[7, 8, 9, 10]]

// rest operator (...args) is used to collect multiple arguments into an array
function sum(...numbers) {
  return numbers.reduce((acc, curr) => acc + curr, 0);
}
//console.log(sum(1, 2, 3, 4)); // Output: 10


// concat used to concatinate two or more array it returns new array.
num1.concat(num2, [7, 8, 9, 10])


// Slice - Used to extract part of an array without modifying the original.
num1.slice(0, 3)

// Splice - Used to add or remove elements from an array and modifies the original array.
num2.splice(1, 2)

// | Feature        | `slice()`                      | `splice()`                            |
// | -------------- | ------------------------------ | ------------------------------------- |
// | Purpose        | Extracts a portion of an array | Adds/removes/replaces elements        |
// | Return Value   | New array                      | Removed elements (also an array)      |
// | Original Array | **Not modified**               | **Modified**                          |
// | Use Case       | Read-only extraction           | Modify the array (add/delete/replace) |


// fill - used to fill elements which is takes as first arg and from it start it will show from 2nd arg
num1.fill(1, 2)

// findIndex - used to return index of the element where condition is true
num1.findIndex((item) => item === 2)

// flat - used to flate array inside array 
num1.flat(1) // (arg)- arg defined defeth of the flat

// reverse - used to reverse the array
num1.reverse()

// sort - used to sort array in acending or descending
const sortarr = [3, 5, 29, 32, 4].sort((a, b) => a - b )


console.log(sortarr);
