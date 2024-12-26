#include<iostream>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int extratime = 240-k,count=0,i;
   for(i=1;i<=n;i++)
    {
       count=count+i;
       if(count*5>extratime)
         break;
    }
    cout<<--i<<endl;
     return 0;
}