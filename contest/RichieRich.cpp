#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;

    vector<int> nums(n);

    for(int i =0; i<n; i++) cin>>nums[i];
     
    long long int res = 0,index=0;
    for(int i=0; i<n; i++)
    {
        int index = 0;
        int flag = 0;
         for(int j = i; j<k+i; j++)
         {

            if(pow(2,index) *nums[j] < pow(2,index+1) * nums[j+1])
            { 
               cout<<nums[j]<<endl;
                flag = 1;
            }
            else 
            {
                flag = 0;
                break;
            }
            index++;
         }
         if(flag)
             res++;
    }
    cout<<res;
    return 0;
}