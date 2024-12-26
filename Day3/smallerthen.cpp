#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
  public:
  vector<int> smallerthecurrent(vector<int> &nums){
         int n = nums.size();
         vector<int> res(n,0), sorted = nums;
         sort(sorted.begin(),sorted.end());
        for(int i = 0; i<n;i++){
              res[i] = lower_bound(sorted.begin(),sorted.end(),nums[i])-sorted.begin();
        }
        return res;
  }
};
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    vector<int> v(n,0);
    cout<<"Enter element of array";
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    Solution s;
    vector<int> res = s.smallerthecurrent(v);
    for(int i =0; i<n; i++){
        cout<<res[i]<<",";
    }
    return 0;
}
