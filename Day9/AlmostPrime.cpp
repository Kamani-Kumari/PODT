#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     int res =0;
     for(int i=2; i<=n; i++){
           set<int> st;
         int num = i,j=2;
          while(num!=1){
              if(num%j==0){
                  st.insert(j);
                 num = num / j;
              }
              else{
                 j++;
              }
          }
         if(st.size()==2)
            res++;
     }
     cout<<res;
    return 0;
}