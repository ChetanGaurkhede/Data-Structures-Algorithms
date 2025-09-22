function multiply(arr) {
  console.log(arr);

  if (arr.length <= 0) {
    return 1
  } else {
    // return arr[arr.length - 1] * multiply(arr.splice(0, arr.length - 1)) // here splice send new array with removeing last element
    return arr[0] * multiply(arr.splice(1)) // here splice send new array with removeing last element


  }
}

console.log(multiply([1, 2, 3, 4, 5]))


