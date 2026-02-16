#include<iostream>
#include<string>
using namespace std;

//Print counting
/*int cnt=0;
void print(){
    if(cnt==3) return;
    cout<<cnt<<endl;
    cnt++;
    print();
}
int main(){
    print();
}*/

//Print name N times 
/*void printName(int i,int n){
    if(i>n) return;
    cout<<"Tripti Agrawal"<<endl;;
    printName(i+1,n);
}
int main(){
    int n;
    cin>>n;
    printName(1,n);
}*/

//Print linearly from 1toN
/*void printNum(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    printNum(i+1,n);
}
void printNum(int i,int n){
    if(i<1) return;
    printNum(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    //printNum(1,n);
    printNum(n,n);
}*/

//Print num in reverse order
/*void printNum(int i,int n){
    if(i>n) return;
    printNum(i+1,n);
    cout<<i<<endl;
}
/*void printNum(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    printNum(i-1,n);
}
int main(){
    int n;
    cin>>n;
    //printNum(1,n);
    printNum(n,n);
}*/

//Sum of first n num
/*void Sum(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    Sum(i-1,sum+i);
}
int Sum(int n){
    if(n==0) return 0;
    return n+Sum(n-1);
}
int main(){
    int n;
    cin>>n;
    //Sum(n,0);
    int sum=Sum(n);
    cout<<sum;
}*/

//Factorial
/*int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int factorial=fact(n);
    cout<<factorial<<endl;
}*/

//Reverse an array
/*void reverse(int arr[],int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}*/
/*void reverse(int arr[],int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reverse(arr,0,n-1);
    reverse(arr,0,n);
    cout<<"Reverse array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/

//check palindrome
/*bool pallindrome(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pallindrome(i+1,s);
}
int main(){
    string s="MADAM";
    cout<<pallindrome(0,s);
}*/

//Fibonacci 
int fibonacci(int n){
    if(n<=1) return n;
    int last=fibonacci(n-1);
    int slast=fibonacci(n-2);
    return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}

