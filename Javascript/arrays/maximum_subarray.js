const num = [-2, -1, -3, 4, -1, 2, 1, -5, 4]

function maxSubArray(nums) {
  let sum = nums[0];
  let arr = []

  for (let i = 0; i < nums.length; i++) {
    let currentSum = 0;
    let currentArr = []
    for (let j = i; j < nums.length; j++) {
      currentArr.push(nums[j])
      currentSum = currentSum + nums[j]
      if (currentSum > sum) {
        sum = currentSum
        arr = currentArr.slice()
      }
    }
  }
  return {
    sum: sum,
    subArr: arr
  }
}

console.log(maxSubArray(num));
