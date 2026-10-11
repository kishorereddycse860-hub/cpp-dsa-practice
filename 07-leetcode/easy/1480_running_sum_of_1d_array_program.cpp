#include<iostream>
using namespace std;
int main(){
    int arr[5];

    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int n=sizeof(arr)/sizeof(arr[0]);
    int result[5];                      // UPDATED: moved above the loop, so it is created once
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j =0;j<=i;j++){
            sum=sum+arr[j];
        }
        result[i]=sum;
    }

    for(int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }
return 0;
}
