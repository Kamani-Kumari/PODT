#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
     long long int w;
      cin>>w;
      long long min=0, max =0,ans=0;
      if(w%2==1 && w<4){
           cout<<"-1";
      }
      else{
          min = w/6;
          max= w/4;
      cout<<min<<" "<<max<<endl;

      }
  }
   return 0;
}