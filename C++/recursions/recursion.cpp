#include<bits/stdc++.h>
using namespace std;


void print(int count, int n){
  if(count > n) return;
  cout<<count;
  cout<<"Hello"<<endl;
  count++;
  print(count, n);
}

void linearCount(int count, int n){
  if(count > n) return;
  cout<<count++<<endl;
  linearCount(count, n);
}

void revLinearCount(int n){
  if( n < 1) return;
  cout<<n--<<endl;
  revLinearCount(n);
}

int printSumOfNumber(int sum, int n){
  if(n<1) return sum;
  sum+=n;
  printSumOfNumber(sum,--n);
}

int printSumOfNumber1(int n){
  if(n==0) return 0;
  return n + printSumOfNumber1(n-1);
}

int factorialOfN(int n){
  if(n==0) return 1;
  return n * factorialOfN(n-1);
}

void reverseArray(int i, int arr[], int n){
  if(i > n/2) return;
  swap(arr[i], arr[n-i-1]);
  reverseArray(i+1, arr, n);
}

bool isPallindrom(int i, string &str){
  if(i>str.size()/2) return true;
  if(str[i] != str[str.size()-i-1]) return false;
  isPallindrom(i + 1, str);
}

int fib(int n) {
  if(n<=1) return n;
  int last = fib(n-1);
  int slanst =fib(n-2);
  return last + slanst;
}

// curios question
int fib2(int n) {
  if(n==0) return 0;
  if(n==1) return 1;
  int last = 1; //  1   2   3   5   8
  int slast = 0; // 1   1   2   3   5
  int spar = 0; //  1   1   2   3   5
                //  2   3   4   5   6

  for(int i = 2; i<=n; i++){
    spar = last; 
    last = last + slast; 
    slast = spar; 
  }
  return last;
  
}
//0, 1, 1, 2, 3, 5, 8

int main(){
  cout<<fib2(3);
  return 0;
}