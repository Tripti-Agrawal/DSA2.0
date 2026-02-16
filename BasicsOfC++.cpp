//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

//Function
void printName(string name){
    cout<<"My name is:"<<name<<endl;
}

void sum(int num1,int num2){
    int num3=num1+num2;
    cout<<"Sum of two no is:"<<num3<<endl;
}

int Sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}

int maxx(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}

void doSomething(int n){
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}

void doChanges(string &s){
    s[2]='a';
    cout<<s<<endl;
}

void changes(int arr[],int n){
    arr[0]+=10;
    cout<<"inside:"<<arr[0]<<endl;
}

int main(){

    //INPUT/OUTPUT
    std::cout<<"Hey Tripti";
    cout<<"\n";
    std::cout<<"Student of Btech"<<std::endl;
    std::cout<<"from IMSEC"<<"\n";

    //IF-ELSE
    //WAP that takes an input of age and print if you are adult or not
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are not an adult";
    }

    //WAP for grading system ask user's marks and print corresponding grades
    int marks;
    cin>>marks;
    if(marks<=25){
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }

    //WAP take the age and decide for their job.
    int age1;
    cin>>age1;
    if(age1<18){
        cout<<"Not eligible for job!"<<endl;
    }
    else if(age1<=57){
        cout<<"eligible for job";
        if(age1>=55){
            cout<<",but retirement soon.";
        }
    }
    else{
        cout<<"Retirement time."<<endl;
    }

    //SWITCH
    //WAP for day no and print their corresponding day
    int day;
    cin>>day;
    switch(day){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"Tuesday";
        break;
        case 3:cout<<"Wednesday";
        break;
        case 4:cout<<"Thursday";
        break;
        case 5:cout<<"Friday";
        break;
        case 6:cout<<"Saturday";
        break;
        case 7:cout<<"Sunday";
        break;
        default:cout<<"Invalid plzz check!";
    }
  
    //ARRAY
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;
    arr[3]+=10;
    cout<<arr[3]<<endl;
    arr[3]=16;
    cout<<arr[3]<<endl;

    //STRING
    string s="Tripti";
    cout<<s[2]<<endl;
    int len=s.size();
    cout<<s[len-1]<<endl;
    s[len-1]='a';
    cout<<s[len-1]<<endl;

    //FOR LOOP
    for(int i=0;i<10;i++){
        cout<<"I can do it!!"<<endl;
    }

    //WHILE LOOP
    int i=0;
    while(i<10){
        cout<<"I am learning DSA"<<endl;
        i++;
    }

    //DO-WHILE LOOP
    int j=2;
    do{
        cout<<"To build critical thinking"<<endl;
        j++;
    }
    while(j<=1);
    cout<<j<<endl;

    //FUNCTION
    //WAP to print name
    string name;
    cin>>name;
    printName(name);

    //WAP to get sum
    int num1,num2;
    cin>>num1>>num2;
    sum(num1,num2);

    int res=Sum(num1,num2);
    cout<<res;

    //WAP to find maximum
    int n1,n2;
    cin>>n1>>n2;
    int maximum=maxx(n1,n2);
    cout<<maximum;

    //PASS BY VALUE
    int n=10;
    doSomething(n);
    cout<<n<<endl;

    //PASS BY REFERENCE
    string s="Tripti";
    doChanges(s);
    cout<<s<<endl;

    int no=5;
    int arr[5];
    for(int i=0;i<no;i++){
        cin>>arr[i];
    }
    changes(arr,no);
    cout<<"main:"<<arr[0]<<endl;

}
