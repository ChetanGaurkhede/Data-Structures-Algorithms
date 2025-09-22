#include<iostream>
using namespace std;



// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *

void squaq (int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}


// * 
// * *
// * * *
// * * * *
// * * * * *

void rightAngleTriangle (int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<=i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}



// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void triangleNum (int n){
  for(int i = 0; i<n; i++){
    for(int j = 1; j<=i+1; j++){
      cout<<j <<" ";
    }
    cout<<endl;
  }
}



// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void triangleNum2 (int n){
  for(int i = 1; i<=n; i++){
    for(int j = 0; j<i; j++){
      cout<<i <<" ";
    }
    cout<<endl;
  }
}



// * * * * * 
// * * * *
// * * *
// * *
// *

void reversRTriangle(int n){
  for(int i = n; i>0; i--){
    for(int j = 0; j<i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}



// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

void reversRTriangleNum(int n){
  for(int i = n; i>0; i--){
    for(int j = 1; j<i+1; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}



//      *
//     ***
//    *****
//   *******
//  *********

void starPiramid(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*i+1; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}



//  *********
//   *******
//    *****
//     ***
//      *

void starPiramidMiror(int n){
  for(int i = n; i>0; i--){
    for(int j = 0; j<n-i+1; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*i-1; j++){
      cout<<"*";
    }

    cout<<endl;
  }
}



//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *

void starPiramidWaterImg(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*i+1; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i = n; i>0; i--){
    for(int j = 0; j<n-i+1; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*i-1; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}



// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void leftAngle(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i =0; i<n; i++ ){
    for(int j=0; j<n-i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}



// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void evenOddTriengle(int n){
  int k;
  for(int i = 0; i < n; i++){
    k = i%2;
    for(int j = 0; j <= i; j++){
      if(j%2==k){
        cout<<"1 ";
      }else{
        cout<<"0 ";
      }   
    }
    cout<<endl;
  }
}



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

void numberColumn(int n){
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < i+1; j++){
      cout<<j;
    }
    for(int j = 0; j < (n-i)*2; j++){
      cout<<" ";
    }
    for(int j = i; j > 0; j--){
      cout<<j;
    }
    cout<<endl;
  }
}



// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

void numberTriIncrease(int n){
  int k = 1;
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < i+1; j++){
      cout<<k++<<" ";
    }  
    cout<<endl;
  }
}



// A
// AB
// ABC
// ABCD
// ABCDE

void triCapitalLetter(int n){
  for(int i = 1; i < n+1; i++){
    for(int j = 0; j < i; j++){
      cout<<char(65+j);
    }   
    cout<<endl;
  }
}



// ABCDE
// ABCD
// ABC
// AB
// A

void triCapitalLetterRev(int n){
  for(int i = n; i > 0; i--){
    for(int j = 0; j < i; j++){
      cout<<char(65+j);
    }   
    cout<<endl;
  }
}



// A
// BB
// CCC
// DDDD
// EEEEE

void triCapitalLetterRow(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout<<char(65+i);
    }
    cout<<endl;
  }
}



//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

void pirsmidCapitalLetter(int n){
  for(int i = 0; i < n; i++){
    for(int j = 1; j < n-i; j++){
      cout<<" ";
    }
    for(int j = 0; j <= i; j++){
      cout<<char(65+j);
    }
    for( int j = i - 1; j >= 0; j--){
      cout<<char(65+j);
    }   
    cout<<endl;
  }
}



// E
// DE
// CDE
// BCDE
// ABCDE

void triCapitalLetterE(int n){ 
  for(int i = 0; i < n; i++){
    for(int j = n-i; j <= n; j++){
      cout<<char(65+j-1);
    }     
    cout<<endl;
  }
}



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

void holowBall(int n){ 
  for(int i = 0; i < n/2; i++){
    for(int j = 0; j < n; j++){
      if(j > (n/2 - i-1) && j < (n/2+i)){
        cout<<" ";
      }else{

        cout<<"*";
      } 
    }     
    cout<<endl;
  }
  for(int i = 0; i < n/2; i++){
    for(int j = 0; j < n; j++){
      if(j > i && j < n-i-1){
        cout<<" ";
      }else{
        cout<<"*";
      } 
    }     
    cout<<endl;
  }
}



// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

void holowBallOppos(int n){
  for(int i = 0; i < n/2; i++){
    for(int j = 0; j < n; j++){
      if(j >= i && j < n-i){
        cout<<" ";
      }else{
        cout<<"*";
      } 
    }     
    cout<<endl;
  }
  for(int i = 0; i < n/2; i++){
    for(int j = 0; j < n; j++){
      if(j > (n/2 - i-1) && j < (n/2+i)){
        cout<<" ";
      }else{
        cout<<"*";
      } 
    }     
    cout<<endl;
  }
}



//  * * * * * * * * * *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  * * * * * * * * * *

void hallowSquar(int n){  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i <= 0 || i == n-1){
        cout<<" *";
      }else{
        if(j <=0  || j >= n-1){
          cout<<" *";
        }else{
          cout<<"  ";
        }
      }
    }
    cout<<endl;
  }
}



int main(){
  hallowSquar(10);
  return 0;
}
