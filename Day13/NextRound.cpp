#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int count = 0;
    int pos = nums[k - 1];
    for (int i = 0; i < n; i++)
    {

        if (nums[i] >= pos && nums[i] > 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}