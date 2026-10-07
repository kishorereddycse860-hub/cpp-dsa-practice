#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the array elements:";
    for(int i=0;i<10;i++)
        cin>>arr[i];

    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<smallest)
            smallest=arr[i];
    }

    cout<<"SMALLEST:"<<smallest;
    return 0;
}
