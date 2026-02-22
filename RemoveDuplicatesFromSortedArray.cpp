#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    int newSize= i+1;
    cout<<"New size:"<<newSize<<endl;
    cout<<"Array after removing duplicates:";
    for(int k=0;k<newSize;k++){
        cout<<arr[k]<<" ";
    }
}
