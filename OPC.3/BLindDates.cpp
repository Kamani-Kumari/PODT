#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> token(n);
   for(int i =0; i<n; i++) cin>>token[i];
    int result = 0;

     for(int i =0; i<n; i++) {
         result ^=  token[i];
  
     }
     cout<<result;
     return 0;
}