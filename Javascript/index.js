



// const isPalindrom = (str) => {
//   let newStr = str.split("");

//   let newArr = [];


//   for (let i = newStr.length - 1; i >= 0; i--) {
//     newArr.push(newStr[i])
//   }

//   let toString = newArr.join("")


//   if (toString == str) {
//     return true
//   }
//   else {
//     return false
//   }


// }

// console.log(isPalindrom("isi"));






// function printNumersWithStar(n) {

//   let row = ""
//   let last = n
//   for (let i = 1; i <= n; i++) {

//     for (let j = 1; j <= n; j++) {

//       if (j < last) {
//         row += "*"

//       } else {
//         row += j
//       }

//     }
//     console.log(row);
//     row = ""
//     last = last - 1
//   }
// }

console.log(printNumersWithStar(5));


function printNumersWithStar(n) {

  let row = ""

  let last = n

  for (let i = 1; i <= n; i++) {

    for (let j = 1; j <= n; j++) {

      if (j < last) {

        row += "*"

      } else {

        row +=  Number(last-j-1)*-1

      }

    }

    console.log(row);

    row = ""

    last = last - 1

  }

}

console.log(printNumersWithStar(5));
 























