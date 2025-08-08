
const num = [12, 35, 1, 10, 34, 1]
const num1 = [10, 5, 10]
const num2 = [10, 5, 10, 4, 15, 15, 5, 30, 2, 3, 4]

const removeDuplicates = function (nums) {

  for (let i = 0; i < nums.length - 1; i++) {
    if (nums[i] === nums[i + 1]) {
      nums.splice(nums[i], 1)
      i--
    }

  }

  return nums.length

}

// console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3]));


var removeDuplicateLetters = function (s) {
  let arr = s.split("");
  let newarr = []
  for (let i = 0; i < arr.length; i++) {
    if (!newarr.includes(arr[i])) {
      newarr.push(arr[i])
    }
  }

  return newarr.sort().join("")

};

console.log(removeDuplicateLetters("cbacdcbc"));