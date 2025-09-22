function recursion(start, end) {

  if (start > end) {
    return
  } else {
    console.log(start++)
    // start++
    recursion(start, end)

  }
}

recursion(1, 10)