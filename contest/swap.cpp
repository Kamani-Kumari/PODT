#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
         cin>>arr[i];
    }
    int count =0;
    for(int i =0; i<n; i++){
        for(int j = i+1; j<n; j++){
             if(arr[i]>arr[j] && (arr[i]*arr[j])%4==1){
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j]=temp;
                  count++;
             }
             if(count==0)
                  break;
              count =0;
        }
    }
    for(int i =0; i<n; i++){
        if(arr[i]>arr[i+1]){
            cout<<"NO";
           return 1;
        }
    }
    cout<<"YES";
    return 0;
}