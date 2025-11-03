#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(vector<int> &arr)
{
  if (arr.size() == 0 || arr.size() == 1)
    return {-1};
  int first = arr[0];
  int second = INT_MAX;
  for (int x : arr)
  {
    if (x < first)
    {
      second = first;
      first = x;
    }
    else if (x > first && x != second)
    {
      second = x;
    }
  }
  const vector<int> final = {first, second};
  return final;
}

bool check_sorted_rotated_arr(vector<int> &nums)
{
  int count = 0;
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i - 1] > nums[i])
    {
      count= count+1;
      if(count>1) return false;
      if(count == 1){
        if(nums[0]<nums[i]) {
          return false;
        }
      }
    }
  }
  return true;
}

// void remove_duplicate_from_arr(vector<int> &arr){
//   int n = arr.size();
//   int k = 0;
//   vector<int> newArr= {};
//   for(int i = 1; i < n; i++){
//     if(i==1){
//       newArr.push_back(arr[0]);
//     }
//     if(arr[i]==arr[i-1]){
//       k++;
//     }else{
//       newArr.push_back(arr[i]);
//     }
//   }

//   for (int i = 0; i < newArr.size(); i++){
//     arr[i]=newArr[i];
//   }
//   return arr;
// }
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return;
        if(k>n){
            k=k%n;
        } 
        for(int i = 0; i < (n - k)/2; i ++){
            int tem = nums[i];
            nums[i]=nums[n-k-i-1];
            nums[n-k-i-1] = tem;
        }
        
        int start = n-k;
        int end = n-1;
        while(start<end){
          int tem = nums[start];
          nums[start]= nums[end];
          nums[end]=tem;
          start++;
          end--;
        }
        
        for(int i = 0; i < n/2; i++){
          int tem = nums[i];
          nums[i]=nums[n-i-1];
          nums[n-i-1] = tem;
        }  
}


void moveZeroes(vector<int>& nums) {
      int n = nums.size();
        for (int i = 0; i<n; i++){
          if(nums[i]==0){
            for(int j = i; j<n-1; j++){
              int tem = nums[j];
              nums[j] = nums[j+1];
              nums[j+1]= tem;
            }  
            n--;
          }
          if(nums[i]==0 && i<n) i--;
        }
        for(int k: nums) cout<<k<<" ";
    }

int missingNumber(vector<int>& nums) {
    unordered_set<int> arr;
    for(int k: nums){
        arr.insert(k);
    }
    for(int i = 1; i <=nums.size(); i++){
      if(arr.find(i) == arr.end()){
        return i;
      }
    }
    return arr.size();
}


int findMaxConsecutiveOnes(vector<int>& nums) {
        int finalCount = 0;
        int count = 0;
        for (int i =0; i<nums.size(); i++){
            if(nums[i]==1 ) {
                count++;
            }else{
              finalCount = max(finalCount, count);
               count=0;
              }
              
            }
            max(finalCount, count);
        return finalCount;
}

void go(vector<int> nums){
       int total = ((nums.size())* (nums.size()+1))/2;
       cout<<total<<endl;
        int sum = 0;
        for (int i =0; i <nums.size(); i++){
            sum+=nums[i];
        }
        cout<<total-sum;
}


int singleNumber(vector<int>& nums) {
    // unordered_map<int, int> mpp;
    
    // for(int i = 0; i<nums.size(); i++){
    //   mpp[nums[i]]++;
    // }
    
    // for(auto it : mpp){
    //   if(it.second == 1) return it.first;
    // }   


    int nxor = 0;
    for(int i = 0; i<=nums.size(); i++){
        nxor = nxor ^ i;
    }
    for(int k: nums){
      nxor^=k;
    }
    cout<<nxor<<endl;
    return nxor;
}

int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i<n; i++){
            
            int sum = 0;
            for (int j=i; j<n; j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
}

int longestSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int length = 0;
        for (int i = 0; i<n; i++){
            // vector<int> arr;
            int sum = 0;
            for (int j=i; j<n; j++){
                sum+=nums[j];
                // arr.push_back(nums[j]);
                if(sum==k && j-i>=length) {
                  length = j+1;
                }
            }
        }
        return length;
}

    
int main()
{
  vector<int> arr = {10, 5, 2, 7, 1, -10};
  // vector<int> result = minAnd2ndMin(arr);
  // cout << "Min: " << result[0] << ", 2nd Min: " << result[1];
  // cout << check_sorted_rotated_arr(arr);
  // rotate(arr, 2);
  // cout<<missingNumber(arr);
  // cout<<findMaxConsecutiveOnes(arr);
  // go(arr);
  // cout<<singleNumber(arr);
  // cout<<subarraySum(arr, 3);
  cout<<longestSubarraySum(arr, 15);

  return 0;
}

