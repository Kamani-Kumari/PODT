#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcase;
  cin>>testcase;
  while(testcase--){
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i =0; i<n; i++) cin>>nums[i];
    long long sum=0;
    int op=0;
    for(int i =0; i<n; i++) sum = sum + abs(nums[i]);
    bool flag = false;
    nums.push_back(1);
    for(int i =0; i<=n; i++){
         if(nums[i]==0) continue;
         if(nums[i]<0)
          {
             flag = true;
          }
          else{
            if(flag)
               {
                flag = false;
                op++;
               }
          }
    }
    cout<<sum<<" "<<op<<endl;
  }
    return 0;
}