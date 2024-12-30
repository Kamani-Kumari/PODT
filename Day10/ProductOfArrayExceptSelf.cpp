#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution{
     public:
     vector<int> productExceptSelf(vector<int>& nums){
         int n = nums.size();
            vector<int> nums(n,0);
            int pro = 1,zero=0;
           for(int i =0; i<n; i++){
            if(nums[i]!=0)
               pro = pro*nums[i];
           if(nums[i]==0){
               zero++;
           }
           if(zero==2)
              return res;
         }
         if(pro!=0){
           for(int i =0; i<n; i++){
             res[i]=pro/nums[i];
           }
         }
         if(pro == 0){
         for(int i =0; i<n; i++){
             if(nums[i]==0)
                res[i]=pro;
         }
         }
         return res;
     }
};
int main(){
    int n;
     cin>>n;
     vector<int> nums;
   for(int i =0; i<n; i++)  cin>>nums[i];
    Solution s;
   cout<<s.productExceptSelf({1,2,3,4});
   return 0;
}