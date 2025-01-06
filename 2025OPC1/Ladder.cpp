#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i =0; i<n; i++)  cin>>v[i];
        
        vector<int> ans;
         int count=0,gcd;
        for(int i =0; i<n-1; i++)
        {
           if(v[i]<=v[i+1]){
            gcd = __gcd(v[i],v[i+1]);
           }
           if(ans.size()!=0 && gcd >= ans.back())
            ans.push_back(gcd);
          else{
              ans.push_back(__gcd(v[i],v[i+2]));
              count++;
          }
        }
        if(count ==1 || count==0)
          cout<<"YES"<<endl;
        else{
          cout<<"NO"<<endl;
        }

     }
     return 0;
}