#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     long long int n,k;
      cin>>n>>k;
      vector<int> nums(n);
      for(int i =0; i<n; i++)  cin>>nums[i];

     long long int sum = 0,res=0;
      if(k<nums[0]){
          cout<<res<<endl;
      }
      else
      {
         for(int i =0; i<n; i++)
         {
             if(k>nums[i])
             {
                res++;
                k = k+nums[i];
             }
             else break;
         }
         cout<<res<<endl;
      }
   }
   return 0;
}