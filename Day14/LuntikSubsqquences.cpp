#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin >> testcase;
  while (testcase--)
  {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
      cin >> nums[i];

    sort(nums.begin(), nums.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum = sum + nums[i];
    }
    int sumcheck = sum;
    set<int> reduceNum;
    for (int i = 0; i < n; i++)
    {
       sumcheck -= nums[i];
       if(nums[i]==0 || sum-1 == sumcheck  )
       {
        reduceNum.insert(nums[i]);
       }
     
       sumcheck = sum;
    }
     cout<<endl<<reduceNum.size();
  }
  return 0;
}