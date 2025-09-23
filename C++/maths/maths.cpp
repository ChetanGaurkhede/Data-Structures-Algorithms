#include<bits/stdc++.h>
using namespace std;


void countDigit(int n){
  int count = 0;
  int number = n;
  while(number>0){
    count = count + 1;
    number = number / 10;
  }
  cout<<"Number of digits in "<<n<<"is "<<count;
}

void reversNumber(int num){

  int revNum = 0;
  bool isNegative = false;
  if (num <= INT_MIN) return ;

  if(num < 0){
    isNegative = true;
    num = num * -1;
  }

  while(num>0){
    if(revNum >= INT_MAX) return ;
    revNum = revNum*10 + (num%10);
    num = num/10;
  }
  if(isNegative){
    cout<<-revNum;
  } else{
    cout<<revNum;
  }

  //using concate
  // string count;
  // int n = num;

  // while(n>0){
  //   count = count + to_string(n%10);
  //   n = (int)n/10;
  // }
  // cout<<num<<" reversed to "<<count;
}

void isPalindrome(int num){
  if(num<10){
    cout<<"is palindron";
    return;
  }

  int revNum = 0;
  int n = num;
  while(n>0){
    revNum = revNum * 10 + (n%10);
    n = n/10;
  }

  if(revNum == num) {
    cout<<"is Palindrome";
  }else{
    cout<<"not Palindrome";
  }
}

void isAmstrong(int n){
  int originalNumber = n;
  int sumofPower = 0;
  int digit = 0;

  int temp = originalNumber;
  while(temp>0){
    temp = temp/10;    
    digit = digit + 1;
  }

  temp = originalNumber;
  while(temp>0){
    sumofPower += pow(temp%10, digit);
    temp = temp/10;
  }

  if(originalNumber == sumofPower){
    cout<<"is Amstrong";
  } else{
    cout<<"not Amstrong";
  }
}

void printAllDivisers(int n){
  
  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      cout<<i<<", ";
    }
  }
}


int main(){
  reversNumber(-12345);
  return 0;
}