#include<iostream>
using namespace std;
class Solution{
    public:
     int gcd(int a, int b){
        if(a==0)
          return b;
        else if(b==0)
          return b;
        if(a>b)
          return gcd(a%b,b);
        else{
          return gcd(a,b%a);
        }

        return 1;
     }
};
int main(){
     Solution s;
     cout<<s.gcd(3,6);
     cout<<s.gcd(0,6);
  return 0;
}