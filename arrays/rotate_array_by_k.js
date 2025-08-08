const num = [1, 2, 3, 4, 5, 6, 7]
const num1 = [-1, -100, 3, 99]

const rotateArray = function (arr, k) {
  let curr = null
  for (let i = 0; i < k; i++) {
    curr = arr.pop()
    arr.unshift(curr)
  }
  return arr
}
const rotateArray2 = function (arr, k) {

   
}

console.log(rotateArray2(num, 2))
