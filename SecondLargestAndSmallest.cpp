#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[],int n){
    int largest=arr[0];
    int slargest=INT8_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int secondSmallest(int arr[],int n){
    int smallest=arr[0];
    int ssmallest=INT8_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest:"<<secondLargest(arr,n)<<endl;
    cout<<"Second Smallest:"<<secondSmallest(arr,n)<<endl;
}