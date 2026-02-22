#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    //Count and extract the digit
    /*int n;
    cin>>n;
    int count=0;
    if(n==0){
        cout<<"Total digit is 1."<<endl;
        return 0;
    }
    while(n>0){
        int lastDigit=n%10;
        cout<<lastDigit<<endl;
        count++;
        n=n/10;
    }
    cout<<"Total digit count:"<<count<<endl;*/

    //Reverse a number
    /*int n;
    cin>>n;
    int revNum=0;
    while(n>0){
        int lastDigit=n%10;
        revNum=(revNum*10)+lastDigit;
        n=n/10;
    }
    cout<<"Reverse digit is:"<<revNum<<endl;*/

    //Check Palindrome a number
    /*int n;
    cin>>n;
    int revNum=0;
    int duplicate=n;
    while(n>0){
        int lastDigit=n%10;
        revNum=(revNum*10)+lastDigit;
        n=n/10;
    }
    if(revNum==duplicate) cout<<"Yes! Number is Palindrome."<<endl;
    else cout<<"OOPS! Number is not palindrome."<<endl;*/

    //Armstrong number
    /*int n;
    cin>>n;
    int sum=0;
    int duplicate=n;
    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit*lastDigit*lastDigit;
        n=n/10;
    }
    if(sum==duplicate) cout<<"Yes! Number is Armstrong."<<endl;
    else cout<<"OOPS! Number is not Armstrong."<<endl;*/

    //Print all the divisor
    // int n;
    // cin>>n;
    /*for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }*/

    /*vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }*/

    //Prime number
    /*int n;
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2) cout<<"Yes! Number is Prime."<<endl;
    else cout<<"OOPS! Number is not Prime."<<endl;*/

    //GCD/HCF
    int n1,n2;
    cin>>n1>>n2;
    /*for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            cout<<i;
            break;
        }
    }*/

    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) cout<<n2;
    else cout<<n1;



}
