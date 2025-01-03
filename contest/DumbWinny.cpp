#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0, maxi = 0;
    for(int i =0;i<n; i++){
      if(s[i]=='R'){
           while(s[i]=='R'){
              count++;
              i++;
           }
           maxi = max(count,maxi);
           count=0;
      }
    }
    cout<<maxi;
    return 0;
}