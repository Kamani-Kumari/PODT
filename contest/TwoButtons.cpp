#include<bits/stdc++.h>
using namespace std;
int Approach1(int n, int m)
{
  int count = 0;
  while(n>0 && n*2!=m)
       {
           n = n-1;
           count++;
           if(n == 0 )
             return INT_MAX;
       }
       n = n*2;
       count++;
    return count;
}
int Approach2(int n, int m)
{
  int count = 0;
  while(n>0 && n<=m)
       {
           n = n*2;
           count++;
       }
    count= count + n-m;
    return count;
}
int main()
{
  int n,m;
  cin>>n>>m;
  int count = 0;

    if(n<m)
    {
      int count1  = Approach1(n,m);
      int count2 = Approach2(n,m);
      count = min(count1,count2);
    }
    else if(n>m)
    {
      
        count = n-m;
    }
  
  cout<<count;
  return 0;
}