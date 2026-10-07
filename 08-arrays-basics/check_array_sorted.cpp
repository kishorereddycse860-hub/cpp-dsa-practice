#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++)
        cin>>arr[i];

    int n=sizeof(arr)/sizeof(arr[0]);
    bool sorted=true;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sorted=false;
            break;
        }
    }

    if(sorted)
        cout<<"Array is sorted";
    else
        cout<<"Array is NOT sorted";
    return 0;
}
