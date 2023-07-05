#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer:";
    cin>>num;
    if(num>=0){
        cout<<"The number is :"<<num;
    }
    else{
        cout<<"The number is negative and skipped";
    }
    return 0;
}