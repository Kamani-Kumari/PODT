#include<iostream>
#include<vector>
using namespace std;
//dutch flag Algorithm 
class Solution{
    public:
    void sortcolors(vector<int>& nums){
         int low=0,mid=0;
         int n = nums.size()-1;
        while(mid<=n){
            if(nums[mid]==0){
               swap(nums[low],nums[mid]);
               mid++;
               low++;
            }
           else if(nums[mid]==1)
            {
              mid++;
            }
            else if(nums[mid]==2){
                swap(nums[n],nums[mid]);
                n--;
            }
        }
    }

};
int main(){
     vector<int> v{2,0,2,1,1,0};
     Solution s;
     s.sortcolors(v);
     for(int i =0; i<6; i++){
        cout<<v[i]<<",";
     }
     return 0;
}