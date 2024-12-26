#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /*
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 1; i<n;i+=2){
        if(nums[i-1]!=nums[i])
            return nums[i-1];
        
        }
        */
        int res = 0;
        for(int i =0; i<nums.size(); i++){
              res = res^nums[i];
        }
        return res;
    }
};
int main(){
      Solution s;
      vector<int> v={1,2,3,1};
      cout<< s.singleNumber(v);
      return 0;
}