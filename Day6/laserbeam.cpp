#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ones;
     int n = bank.size(),count=0;
     int m = bank[0].size();
     for(int i =0; i<n; i++){
           for(int j =0; j<m; j++){
               if(bank[i][j]=='1'){
                   count++;
               }
           }
           if(count)
           ones.push_back(count);
           count=0;
     }
     int result =0;
     
     for(int i =ones.size()-2; i>=0; i--){
              result = result + ones[i]*ones[i+1];
     }

        return result;
    }
};
int main(){
    
}