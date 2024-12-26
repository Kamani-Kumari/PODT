#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count=0;
         for(int i =0;i<n;i++){
        if(nums[i]%3==1 ||  nums[i]%3==2){
                count++;
        }
         }
        return count;
    }
};
int main(){
      Solution s;
      vector<int> v={1,2,3,3,6,9};
      cout<<s.minimumOperations(v);
      return 0;
}
