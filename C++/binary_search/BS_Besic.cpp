#include<bits/stdc++.h>
using namespace std;




int lowerBound(vector<int>& arr, int target) {

    int n = arr.size(), low = 0, high = n - 1, ans = n; 
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}



int upperBound(vector<int>& arr, int target) {

    int n = arr.size(), low = 0, high = n - 1, ans = n; 
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n - 1, ans = n;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }

    
int findFloor(vector<int>& arr, int x) { 
    int n = arr.size(), low = 0, high = n - 1, ans = n;  
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans- 1;
}


int main(){

  vector<int> arr ={1,2,3,5,7,9};
  cout<<lowerBound(arr, 5);
  return 0;
}