#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Solution{
  public:
int minimumMoves(string s) {
        int n = s.size(),count=0;
        int i =0;
        while(i<n){
             if(s[i]=='X'){
                  count++;
                  i=i+3;
             }
             else{
                i++;
             }
        }
        return count;
}
};
int main(){
     string s;
     cout<<"Enter the string\n";
     cin>>s;
     Solution ob;
     cout<<ob.minimumMoves(s);
     return 0;
}

    