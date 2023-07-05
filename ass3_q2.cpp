#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=0){
        cout<<"absolute value is:"<<n<<endl; 
    }
    else{
        cout<<"absolute value is :"<<0-n<<endl;
    }
    return 0;
}