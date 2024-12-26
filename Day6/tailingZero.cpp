#include<iostream>
#include<math.h>
using namespace std;
int main(){
   long long int n,res=0,i=1;
     cin>>n;
    int x = n;
    while(n!=0){
       res = res+x/pow(5,i);
        n=n/5;
        i++;
    }
    cout<<res;
    return 0;
}