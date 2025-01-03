#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> Btech(n);
   for(int i =0; i<n; i++) cin>>Btech[i];
   int m;
   cin>>m;
   vector<int> MCA(m);
   for(int i =0; i<m; i++) cin>>MCA[i];

   sort(Btech.begin(),Btech.end());
   sort(MCA.begin(),MCA.end());
int count = 0;
   for(int i =0; i<n; i++){
      for(int j =count; j<m; j++){
      if(abs(Btech[i] - MCA[j])<=1){
         count++;
         break;
      }
      if(MCA[j]>Btech[i])
          break;
   }
   }
   
   cout<<count;
   return 0;
}