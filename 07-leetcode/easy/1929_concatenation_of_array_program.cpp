#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int ans[10];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        ans[i]=arr[i];
        ans[i+n]=arr[i];
    }
    for(int i=0;i<2*n;i++){             
        cout<<ans[i]<<" ";              
    }
    return 0;
}
