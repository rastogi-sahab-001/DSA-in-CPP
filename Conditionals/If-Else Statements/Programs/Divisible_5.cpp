#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    if(number%5==0){
        cout<<"Number is Divisible by 5";
    }
    else{
        cout<<"Number is not Divisible by 5";
    }
    return 0;
}