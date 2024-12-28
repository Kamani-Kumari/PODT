#include<bits/stdc++.h>
using namespace std;
int main(){
      int TotalTest;
      cin>>TotalTest;
      while(TotalTest--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
      int temp,res;
      for(int i = 0; i<n; i++){
          if(arr[i]==i+1){
              continue;
          }
          else{
              temp = arr[i];
              break;
          }
      }
      int i;
      for( i =0; i<temp;i++);
      res = abs(temp - arr[i-1]);
      cout<<res<<endl
      
      ;
      
      }
     return 0;
}