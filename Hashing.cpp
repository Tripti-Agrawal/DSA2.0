#include<iostream>
#include<vector>
#include<map>
using namespace std;
//No. of occurence of digits
void count_Occurence(vector<int>& arr,vector<int>& hash,int n){
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

}
void countByMap(map<int,int>& mpp){
    for(auto it:mpp){
        cout<<it.first<<"=>"<<it.second<<endl;
    }
}

//No.of occuenc of alphabets
void count_alpha(string& s,vector<int>& hash){
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
}
int main(){
    // int n;
    // cin>>n;/
    string s;
    cin>>s;
    // vector<int>arr(n);
    // map<int,int>mpp;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //     mpp[arr[i]]++;
    // }
    // vector<int>hash(13,0);
    vector<int>hash(256,0);
    // count_Occurence(arr,hash,n);
    // countByMap(mpp);
    count_alpha(s,hash);
    int q;
    cin>>q;
    while(q--){
        // int number;
        // cin>>number;
        // cout<<hash[number]<<endl;
        // cout<<mpp[number]<<endl;

        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    }

}
