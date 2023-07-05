#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter an operator(+,-,*,/):";
    cin>>c;
    int num1,num2;
    cout<<"Enter number1:";
    cin>>num1;
    cout<<"Enter number2:";
    cin>>num2;
    switch(c){
        case '+':
        cout<<"result is :"<<num1+num2<<endl;
        break;
        case '-':
        cout<<"result is :"<<num1-num2<<endl;
        break;
        case '*':
        cout<<"result is :"<<num1*num2<<endl;
        break;
        case '/':
        cout<<"result is :"<<num1/num2<<endl;
        break;
        default:
        cout<<"Invalid operation"<<endl;
    }
    return 0;
}