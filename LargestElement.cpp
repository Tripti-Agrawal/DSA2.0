#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int>&arr,int n){
    int largest=arr[0];
    for (int i=0;i<n;i++)
    {
      if(arr[i]>largest){
        largest=arr[i];
      }
    }
    return largest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=largestElement(arr,n);
    cout<<"Largest element is:"<<res;
}