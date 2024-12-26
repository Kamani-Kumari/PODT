#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution{
   public:
     string pangram(string s){
          vector<int> arr(26,0);
        int n = s.size();
      for(int i =0; i<n; i++){
           int x = tolower(s[i])-'a';
         arr[x]++;
      } 
      for(int i =0; i<26; i++){
          if(arr[i]==0)
            return "NO";
      } 
      return "YES";
    }
     
};
int main(){
     int n;
     cin>>n;
     string str;
    cin>>str;
    Solution s;

    cout<<s.pangram(str);
      
    return 0;
}