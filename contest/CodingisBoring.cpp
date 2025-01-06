#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> score(n);
    for(int i =0; i<n; i++) cin>>score[i];

    int hcf = score[0];
    for (int i = 1; i < n; i++)
    {
        hcf = __gcd(hcf,score[i]); 
    }
    int result = 1;
    if(hcf == 1)
          cout<<result;
    else{
      int checkHCF = score[0];
    for(int i = 0; i<n-1; i++)
    {
        checkHCF = __gcd(checkHCF,score[i]);

        if()
    }
  }
}