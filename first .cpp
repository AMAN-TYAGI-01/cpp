
#include<iostream>
using namespace std;
int main() {
    // 2 table Question=1
    for(int i=1;i<=10;++i)
    {
        cout<<i*2<<endl;
    }
    // 2 to 10 tables Question=2
    for(int i=2;i<=10;++i)
    {
        for(int j=1; j<=10;++j){
            cout<<i*j<<endl;
        }
    }
    // sum of two numbers Question=3
    int sum=0;
    for(int i=1; i<=3;i++)
    {
        sum=sum+i;

    }
cout<<sum;
// fectorial Question=4
int sum=1;
for(int i=1;i<=4;i++){
    sum=sum*i;
   
}
 cout<<sum;
// power Question=5 
int number=5;
int power=3;
int sum=1;
for(int i=1;i<=power;++i){
sum=number*sum;

}
cout<<sum;

Ascii value Question=6
for(int i=0; i<=256;i++)
{
    cout<<"ASCII VALUE="<<i<<char(i)<<endl;
}

// factor Question=7
int number=4;
for(int i=1;i<=4;++i){
    if(number%i==0){
        cout<<i;
    }
}

// Reverse number Question=8
int num=123456;
int reverse;
while(num!=0){
    reverse=reverse*10+num%10;
    num=num/10;
}
cout<<reverse;
}


