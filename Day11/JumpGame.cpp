#include<bits/stdc++.h>
using namespace std;
class Solutin{
  public:
   bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        
        for(int i = nums.size()-2; i>=0; i--){
               if(i + nums[i] >= goal){
                  goal = i;
               }
        }  
          return goal==0;
    }
};
int main(){
     int n;
     cin>>n;
     vector<int> nums;
     for(int i =0; i<n; i++)  cin>>nums[i];
     bool ans = canJump(nums);
     return 0;
}