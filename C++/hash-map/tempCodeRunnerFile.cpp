
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
