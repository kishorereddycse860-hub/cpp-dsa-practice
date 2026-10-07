#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the array elements:";
    for(int i=0;i<10;i++)
        cin>>arr[i];

    int n=sizeof(arr)/sizeof(arr[0]);

    int largest=arr[0];
    int slargest=INT_MIN;
    int smallest=arr[0];
    int ssmallest=INT_MAX;

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }

    if(slargest==INT_MIN)
        cout<<"No second largest"<<endl;
    else
        cout<<"SECOND LARGEST:"<<slargest<<endl;

    if(ssmallest==INT_MAX)
        cout<<"No second smallest";
    else
        cout<<"SECOND SMALLEST:"<<ssmallest;

    return 0;
}
