#include<bits/stdc++.h>
using namespace std;
void Solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0; i<n; i++) cin>>nums[i];
    int k;
    cin>>k;
    if(k==0)
    {
        cout<<"yes";

    }
    else
    {
       for(int i = 0; i<n&&k>0; i++)
       {
           if(k==0)
              break;
          int count = 0;
          int flag = 0;
          while(i<n && nums[i]==0)
          {
             if(i==0)
                {
                flag = 1;
                }
                count++; 
              i++;
          }
          cout<<count<<" "<<flag<<endl;
       if(flag==1)
          {
            if(count%2==0 || count<3)
              k = k- (count/2 -1);
             else
              k = k - count/2;
              if(count>2)
                k = k-1;
                flag = 0;
          }
          else if(count>2){
             if(count%2==0)
              k = k-count/2 -1;
             else
              k = k - count/2;
          }
          
       }
       if(k>0)
         cout<<"no";
        else{
          cout<<"yes";
        } 
    }
}

int main()
{
    Solve();
   return 0;
}