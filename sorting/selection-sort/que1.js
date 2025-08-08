var arr = [1, 2, 3, 4, 5, 6];

function selectionSort(arr) {

  for (let i = 0; i < arr.length - 1; i++) {
    let currentIndex = i

    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[currentIndex]) {
        currentIndex = j
      }

    }
    if (currentIndex !== i) {

      let temp = arr[i]
      arr[i] = arr[currentIndex]
      arr[currentIndex] = temp
    }

  }



  return arr
}

console.log(selectionSort(arr));




