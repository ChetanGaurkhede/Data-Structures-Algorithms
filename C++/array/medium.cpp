#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    // for(int i = 0; i < nums.size(); i++){
    //     for(int j = i + 1; j < nums.size(); j++){
    //         if(nums[i]+nums[j]==target) return {i, j};
    //     }
    // }
    // return {-1, -1};

    unordered_map<int, int> mpp;
    for(int i = 0; i < nums.size(); i++){
      int num = target - nums[i];
      if(mpp.find(num) != mpp.end()){
        return {mpp[num], i};
      }
      mpp[num]=i;
    }
    return {-1, -1};
}

void sortColors(vector<int>& nums) {
    // map<int, int> mpp;
    // for(int i = 0; i < nums.size(); i++){
    //     mpp[nums[i]]++;
    // }
    // int ind = 0;
    // for(auto it: mpp){
    //     for(int i = 0; i<it.second; i++){
    //       nums[ind]=it.first;
    //       ind++;
    //     }
    // }
    // for(int k: nums){
    //   cout<<k<<" ";
    // }
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < nums.size(); i++){
      if(nums[i]==0) count0++;
      else if(nums[i]==1) count1++;
      else count2++;
    }    
    for(int i = 0; i < count0; i++){
      nums[i]=0;
    }
    for(int i = count0; i < count0 + count1; i++){
      nums[i]=1;
    }
    for(int i = count0 + count1; i < nums.size(); i++){
      nums[i]=2;
    }
  

}

int majorityElement(vector<int>& nums) {
  map<int, int> mpp;
  for(int i = 0; i<nums.size(); i++){
    mpp[nums[i]]++;
  }
  int first = 0;
  int second = 0;
  for(auto it : mpp){
    if(it.second > second){
      second = it.second;
      first = it.first;
    }
  }
  return first;
}

int maxSubArray(vector<int>& nums) {
  int j = 0;
  int sum = 0;
  for(int i = 0; i < nums.size(); i++){
    for(int j = i; j < nums.size(); j++){
      if(sum>0){
        sum = sum+nums[j];
        
      }
    }
  } 
}


int main(){
  vector<int> arr = {3,3,4};
  // sortColors(arr);
  cout<<majorityElement(arr);
  return 0;
}