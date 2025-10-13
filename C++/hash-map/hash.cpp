#include <bits/stdc++.h>
using namespace std;

void checkRepeatNumbers(int arr1[], int arr2[], int n)
{
  int arr[n] = {0};

  for (int i = 0; i < n; i++)
  {
    arr[arr1[i]] = arr[arr1[i]] + 1;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[arr2[i]] << ", ";
  }
}

void hashMapcheckRepeatNumbers()
{
  int n = 5;
  int arr[n] = {1, 2, 3, 0, 3};
  map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  while (true)
  {
    int c;
    cin >> c;
    cout << mpp[c];
  }
}

void checkRepeatchar()
{

  string str = "chetankksdnfk";

  int hash[26] = {0};

  for (int i = 0; i < str.size(); i++)
  {
    hash[str[i] - 'a'] += 1;
    // cout << static_cast<char>(97+arr[i]) << " ";
  }

  while (true)
  {
    char a;
    cin >> a;
    cout << hash[a - 'a'];
  }
}

void hasMapcheckRepeatchar()
{
  string str = "fchjbjjvghbkc";

  map<char, int> mpp;

  for (int i = 0; i < str.size(); i++)
  {
    mpp[str[i]]++;
  }

  for (auto it : mpp)
  {
    cout << it.first << "->" << it.second << endl;
  }
  while (true)
  {
    char ch;
    cin >> ch;
    cout << ch << " Appears " << mpp[ch] << " times" << endl;
  }
}

void hiestAndLowestFrequency()
{
  int arr[10] = {1, 3, 4, 2, 45, 6, 3, 6, 6, 6};

  map<int, int> mpp;
  for (int i = 0; i < 10; i++)
  {
    mpp[arr[i]]++;
  }
  cout << "Loop done" << endl;

  map<int, int> mpp2;

  for (auto it : mpp)
  {
    cout << it.first << " --> " << it.second << endl;
    mpp2[it.second] = it.first;
  }
  auto lowest = mpp2.begin();
  auto highest = mpp2.rbegin();
  cout << lowest->second << " has lowest Frequency" << endl;
  cout << highest->second << " has hight Frequency" << endl;
}
int main()
{
  hiestAndLowestFrequency();
  return 0;
}