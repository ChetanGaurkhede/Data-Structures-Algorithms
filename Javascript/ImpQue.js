//  Q1. Pallindrome or Not

// const isPallindron = (number) => {

//   const result = number.toString().split('').reverse().join('')

//   if (+result === number) {
//     return "Palindron"
//   }
//   else {
//     return "not pallindron"
//   }
// }
// const isPal = isPallindron(123)
// console.log(isPal)


// Q2. Fibonacci number
// 0,1,1,2,3,5,8,13

// const fibonaci = function (num) {
//   let arr = [0, 1];


//   for (let i = 2; i <= num; i++) {
//     arr.push(arr[i - 2] + arr[i - 1])

//   }
//   return arr[num]
// }
// console.log(fibonaci(3))


// Q3. Valid Anagram


//method 1
// const isAnagram = (str1, str2) => {
//   if (str1.length !== str2.length) {
//     return false
//   }

//   const newStr1 = str1.toLowerCase().split("").sort().join("")
//   const newStr2 = str2.toLowerCase().split("").sort().join("")

//   return newStr1 === newStr2
// }


// console.log(isAnagram("Chetan", "Tanch"))

// method 2
// const isAnagram = (str1, str2) => {

//   if (str1.length !== str2.length) {
//     return false
//   } // Check if length is not same return false

//   let obj1 = {}; // creating two new empty objects
//   let obj2 = {};

//   for (let i = 0; i < str1.length; i++) {

//     obj1[str1[i]] = (obj1[str1[i]] || 0) + 1
//     obj2[str2[i]] = (obj2[str2[i]] || 0) + 1  // adding key in obj and its repeating numbers

//   }

//   for (const key in obj1) {
//     if (obj1[key] !== obj2[key]) return false  // if both object values are not same return false
//   }

//   return true // if object keys and value are same then return true
// }

// console.log(isAnagram("Chetan", "tanChe"))


// const num = [2, 7, 11, 15]
// const num = [3, 2, 4]
// const nums = [3,3]
// const t = 6

// function twoSum(num, t) {


//   for (let i = 0; i < num.length; i++) {


//     for (let j = i + 1; j < num.length; j++) {
//       if ((num[i] + num[j]) === t) {

//         return [i, j]
//       }

//     }
//   }

// }
// optimise method
// function twoSum(num, t) {
//   var obj = {}  // create a empty object

//   for (let i = 0; i < num.length; i++) { // loop on num
//     var n = num[i]   // n = store ith value

//     if (obj[t - n] >= 0) {
//       return [obj[t - n], i]
//     } else {
//       obj[n] = i  // add obj = { n : i }
//     }
//     console.log(obj)

//   }

// }

// console.log(twoSum(num, t));


// Q. 5 Maximum profit

// function maxProfit(prices) {

//   let maxProfit = 0;

//   for (let i = 0; i < prices.length - 1; i++) {

//     for (let j = i + 1; j < prices.length; j++) {
//       const currentProfit = prices[j] - prices[i]
//       if (currentProfit > maxProfit) maxProfit = currentProfit

//     }

//   }
//   return maxProfit

// }

// console.log(maxProfit([7, 1, 5, 3, 6, 4]));

const arr1 = [1000, 4500, 2000, 3000]
const arr2 = [14500, 7000, 7000, 9000]

function sameValue(arr1, arr2) {
  let newArr = []


  for (let i = 0; i < arr1.length; i++) {

    if (arr2.includes(arr1[i])) {
      newArr.push(arr1[i])
    }

    for (let j = 0; j < arr2.length; j++) {
      if (arr1[i] === arr2[j]) {
        arr2.splice(j, 1)
        console.log(arr2);

      }

    }
  }
  if (newArr.length < 1) {
    return -1
  } else {

    return newArr.sort((a, b) => b - a)
  }

}

console.log(sameValue(arr1, arr2));




