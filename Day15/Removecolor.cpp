#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool winnerOfGame(string colors) {
        int size = colors.size();
        if(size<3)
          return false;
          int Alice = 0, Bob = 0;
        for(int i =0; i<size-2; i++)
        {
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2] == 'A')
            {
                Alice++;
            }
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2] == 'B')
            {
                Bob++;
            }

        }
        while(Alice && Bob)
        {
            Alice--;
            Bob--;
        }
        return  Alice==0?false:true;
    }
};
int main(){
   string s;
    cin>>s;
    Solution obj;
    cout<<obj.winnerOfGame(s);
     return 0;
}