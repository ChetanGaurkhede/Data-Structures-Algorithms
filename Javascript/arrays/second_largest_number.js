const num = [12, 35, 1, 10, 34, 1]
const num1 = [10, 5, 10]
const num2 = [10, 5, 10, 4, 15, 15, 5, 30, 2, 3, 4]

const secondLNum = function (arr) {  // (Ologn)
  let newarr = []                         // create new empty array
  for (let i = 0; i < arr.length; i++) {
    if (!newarr.includes(arr[i])) {       // check whether current elment is present in the newarr, if not it will push to newarr
      newarr.push(arr[i])
    }
  }
  return newarr.sort((a, b) => b - a)[1]  // will sort arr and return the 2 element  in the array

}

// console.log(secondLNum(num2))

// Optimized solution - On
const secondLargestElement = function (arr) {
  let largestElement = Number.NEGATIVE_INFINITY
  let SecondLargest = Number.NEGATIVE_INFINITY

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > largestElement) {
      SecondLargest = largestElement
      largestElement = arr[i]
    } else if (arr[i] != largestElement && arr[i] > SecondLargest) {
      SecondLargest = arr[i]
    }

  }
  return SecondLargest
}

console.log(secondLargestElement(num))