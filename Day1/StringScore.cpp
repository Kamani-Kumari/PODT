#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int diff = 0;
        for(int i =0; i<n-1;i++){
            diff = diff+abs(s[i]-s[i+1]);
        }
        return diff;;
    }
};
int main(){
       Solution s;
      cout<< s.scoreOfString("kamani");
       return 0;
}