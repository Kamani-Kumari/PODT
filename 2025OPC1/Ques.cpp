#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
   cin>>t;
   while(t--)
   {
      long long int n;
       cin>>n;
       string s;
       cin>>s;
      long long int len =1;
      long long int index=-1;
      int count =0;
       for(int i =0; i<n; i++)
       {
           
           if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='Y')
           {
               if(index == -1 )
                 len = i+1;
               else
               {
                len = max(len,abs(index-i));
               }
            index = i;
            count++;
           }

       }
       if(count == 1)
       {
           len = max(index+1,n-index);
       }
       if(len == 1)
       {
         cout<<n+1;
       }
       else
       cout<<len<<endl;
   }
   return 0;
}