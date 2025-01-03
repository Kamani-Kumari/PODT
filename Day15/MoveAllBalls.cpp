#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> minOperations(string boxes)
     {
        int size = boxes.size();
        vector<int> result(size);
        vector<int> PosOnes;

        for(int i=0; i<size; i++)
        {
              if(boxes[i]=='1')
              {
                PosOnes.push_back(i);
              }
        }

      for(int i=0; i<size; i++)
      {
        int sum = 0;
        for(int j = 0; j<PosOnes.size(); j++)
        {
             sum = sum + abs(i-PosOnes[j]); 
        }
        result[i]=sum;
      }
      return result;
    }
};
int main(){
   string s;
    cin>>s;
    Solution obj;
    vector<int> v = obj.minOperations(s);
     for( int i=0; i<v.size(); i++) 
     {
        cout<<v[i]<<" ";
     }
     return 0;
}