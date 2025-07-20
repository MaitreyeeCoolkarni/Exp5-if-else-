#include <iostream>
using namespace std;

int main() {
    
    int num1;
    int num2;
    int num3;
    cout<<"Enter first num:";
    cin>>num1;
    cout<<"Enter second num:";
    cin>>num2;
    cout<<"Enter third num:";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"num1 is bigger";
    }
    if(num2>>num3&&num2>>num1){
        cout<<"num2 is bigger";
    }
    else{
        cout<<"num3 is bigger";
    }
    return 0;
}
