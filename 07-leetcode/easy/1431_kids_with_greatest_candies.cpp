//1431. Kids With the Greatest Number of Candies 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, extraCandies;
    cout<<"Enter the number of kids:";
    cin>>n;
    vector<int>candies(n);
    cout<<"Enter the candies of each kid:";
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    cout<<"Enter the extra candies:";
    cin>>extraCandies;

    // Step 1: find the maximum
    int maxi=candies[0];
    for(int i=1;i<n;i++){
        if(candies[i]>maxi){
            maxi=candies[i];
        }
    }

    // Step 2: check each kid
    vector<bool>result(n);
    for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=maxi){
            result[i]=true;
        }
        else{
            result[i]=false;
        }
    }

    // Step 3: print
    cout<<"Result: ";
    for(int i=0;i<n;i++){
        if(result[i]) cout<<"true ";
        else cout<<"false ";
    }
    return 0;
}
