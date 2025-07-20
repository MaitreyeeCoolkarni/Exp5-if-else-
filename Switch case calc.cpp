#include<iostream>
using namespace std;

int main(){
    char choice;
    cout<<"1:Add,B:Subtract,C:Divide,D:Multiply"<<endl;
    cout<<"Enter a choice"<<endl;
    cin>>choice;
    int a;
    int b;
    cout<<"Enter a number1"<<endl;
    cin>>a;
    cout<<"Enter a number2"<<endl;
    cin>>b;
    
    
    switch(choice){
        case 'A':
        cout<<(a+b);
        break;
        case 'B':
        break;
        cout<<(a-b);
        case 'C':
        cout<<(a/b);
        break;
        case 'D':
        cout<<(a*b);
        break;
        
    }
