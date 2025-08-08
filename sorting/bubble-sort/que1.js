var arr = [1, 2, 3, 4, 5, 6];

function bubbleSort(arr) {

  for (let i = 0; i < arr.length; i++) {

    let isSorted = true; // check weather array is already sorted or not
    for (let j = 0; j < (arr.length - i - 1); j++) {

      if (arr[j + 1] < arr[j]) { // Check weather next index value is greater than previus if true it swap get lower value in front of bigger


        let temp = arr[j]
        arr[j] = arr[j + 1]
        arr[j + 1] = temp  // swapping the index
        isSorted = true // make true on every swap
      }

      if (isSorted) break;

    }


  }

  return arr
}

console.log(bubbleSort(arr));




