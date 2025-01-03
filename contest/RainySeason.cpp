#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> HRoad(n);
   for(int i =0; i<n; i++) cin>>HRoad[i];
  int count =0, count1=0;
   for(int i =0; i<n-1; i++)
   {
      if(HRoad[i]>=HRoad[i+1])
          count++;
      
      if( HRoad[i]<=HRoad[i+1])
         count1++;
      
   }
   if( count == count1 && HRoad[count] <=HRoad[count-1] && HRoad[count]<=HRoad[count+1]){
      cout<<"YES";
   }
  else if(count == n || count == n-1){
      cout<<"YES";
   }
   else if(count1==n || count1==n-1)
   {
       cout<<"YES";
   }
   
   else{
      cout<<"NO";
   }

   return 0;
}
