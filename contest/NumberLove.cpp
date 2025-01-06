#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         long long int a;
         cin>>a;
        long long int count = (pow(2, __builtin_popcount(a)) - 2);
        
         cout<<count<<endl;
     }
     return 0;
} 