#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int size;
    int rem;
    cin>>size>>rem;
    string s;
    cin>>s;
    int count =0;
    for(int i =0; i<size; i++)
    {
          if(rem >= 0 && s[i]=='G'){
              count++;
          }
          else if(rem>0){
            rem--;
          }
          else{
              break;
          }
    }
    cout<<count<<endl;
  }
  
  return 0;
}