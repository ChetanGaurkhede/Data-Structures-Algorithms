#include <bits/stdc++.h>
#include <iterator>
using namespace std;

void selection_sort(int arr[], int n) // Worst and Everage Time complexity = n^2; Best time complexity = n;
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i; // Checking smallest value index
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    int tem = arr[min];
    arr[min] = arr[i];
    arr[i] = tem;
  }
}

void bubble_sort(int arr[], int n) // Worst and Everage Time complexity = n^2; Best time complexity = n;
{
  for (int i = 0; i < n; i++)
  {
    bool isSwap = true; // if array is sorted then break and return same array

    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int tem = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = tem;
        isSwap = false;
      }
    }
    if (isSwap)
      break;
    cout << "Swaped\n";
  }
}

void insertion_sort(int arr[], int n) // Worst and Everage Time complexity = n^2; Best time complexity = n;
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      int tem = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = tem;
    }
  }
}



void recursive_section_sort(int arr, int n){
  
}

int main()
{

  vector<int> arr={4,3,6,5,7,9,2};

  // merge_sort(arr, 0, 6);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}