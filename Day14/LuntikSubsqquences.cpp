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
    long long int ones = count(nums.begin(), nums.end(), 1);
   long long int result = 0;
   long long zeros = 0;
     zeros = count(nums.begin(), nums.end(), 0);
      result = pow(2,zeros)*ones;
      cout<<result<<endl;
  }
  return 0;
}