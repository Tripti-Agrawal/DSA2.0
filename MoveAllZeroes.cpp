#include<iostream>
#include<vector>
using namespace std;
vector<int>moveZeroes(int n,vector<int>arr){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nonZero=temp.size();
    for(int i=0;i<nonZero;i++){
        arr[i]=temp[i];
    }
    for(int i=nonZero;i<n;i++){
        arr[i]=0;
    }
    return arr;
}

vector<int>moveZero(int n,vector<int>arr){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //vector<int>res=moveZeroes(n,arr);
    vector<int>res=moveZero(n,arr);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }

    
}