function frequency() {
  const arr = [1, 2, 3, 54, 3, 2, 4, 5, 6, 4];
  let hasMap = new Map();

  for (let i = 0; i < arr.length; i++)
    (hasMap.has(String(arr[i]))) ? hasMap[arr[i]] += 1 : hasMap.set(arr[i], 1);
  let lowest

  // const data =Object.entries(hasMap)
  

  console.log(hasMap)
  // console.log(data)


}

frequency()