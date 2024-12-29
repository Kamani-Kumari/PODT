#include<bits/stdc++.h>
using namespace std;
int main(){
     //1 6 7 4 9 2 3 8 5
     //0 4 4 0 4 4 4 0 4 gcd of that
      int TotalTest;
      cin>>TotalTest;
      while(TotalTest--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
      int res = 0;
      for(int i =0; i<n; i++){
           res = __gcd(res,abs(arr[i]-i-1));
      }
      cout<<res<<endl;
      
      }
     return 0;
}