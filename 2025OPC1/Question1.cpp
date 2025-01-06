#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  
  while(n--){
    int l,b,h,s;
  cin>>l>>b>>h>>s;
  int v1=l*b*h;
  int v2 = s*s*s;
  if(v1>v2)
   {
      cout<<"CUBE"<<endl;
   }
   else if(v1<v2){
    cout<<"CUBOID"<<endl;
   }
   else{
      cout<<"EQUAL"<<endl;
   }
  }
  return 0;
}