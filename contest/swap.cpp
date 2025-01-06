#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
         cin>>arr[i];
    }
    int count =0,i;
    for( i =0; i<n; i++){
        for(int j = i+1; j<n; j++){
             if(arr[i]>arr[j] && (arr[i]*arr[j])%4==1){
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j]=temp;
             }
        }
        if((i != n-1 && arr[i] > arr[i+1]))
        {
            cout<<"NO";
               break;
        }
   }
    if(i==n)
    cout<<"YES"<<endl;
    }
    return 0;
}