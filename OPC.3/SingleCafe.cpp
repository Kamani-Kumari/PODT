#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    map<int,int> mp;
   for(int i = 0; i<n ; i++)
   {
        int hour,second;

          cin>>hour>>second;
          int Ttime = hour*60+second;
          mp[Ttime]++;
   }
   int maxi = 0;
   for(auto x: mp)
   {
      maxi = max(maxi,x.second);
   }
   cout<<maxi;

   return 0;
}