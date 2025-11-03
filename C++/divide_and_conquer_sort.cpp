#include<bits/stdc++.h>
using namespace std;
// [4,3,6,5,7,9,2]
void merge(vector<int> &arr, int low, int mid, int high){
  vector<int> temp;
  int left = low;
  int right = mid+1;
  while(left <= mid && right <= high){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }
  for(int i=low; i<=high; i++){
    arr[i]= temp[i-low];
  }

}

void merge_sort(vector<int> &arr, int low, int high){
  if(low == high) return;
  int mid = (low + high) / 2;
  
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);
  merge(arr, low, mid, high);
  
}

// Queck sort 7,6,3,6,8,9,
int find_pivot(vector<int> &arr, int low, int high){
  int pivot = arr[low];
  int i = low;
  int j = high;
  while(i < j){
    while(arr[i] <= pivot && i <= high - 1){
      i++;
    }
    while(arr[j] > pivot && j >= low + 1){
      j--;
    }
    if(i < j)swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void queck_sort(vector<int> &arr, int low, int high){
  if(low < high){
    int pIndex = find_pivot(arr, low, high);
    queck_sort(arr, low, pIndex -1);
    queck_sort(arr, pIndex + 1, high);
  }
}

int main(){
  vector<int> arr = {4,2,5,8,7,9,1,3,6,0};
  queck_sort(arr, 0, arr.size() - 1);
  for(int a: arr){
    cout<<a <<", ";
  }
  return 0;
}