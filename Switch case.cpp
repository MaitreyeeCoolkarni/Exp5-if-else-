#include<iostream>
using namespace std;

int main(){
    char choice;
    cout<<"A:Shoot,B:Kill,C:Respawn,D:Bomb"<<endl;
    cout<<"Enter a choice"<<endl;
    cin>>choice;
    
    
    switch(choice){
        case 'A':
        cout<<"Shoot";
        break;
        case 'B':
        break;
        cout<<"Kill";
        case 'C':
        cout<<"Respawn";
        break;
        case 'D':
        cout<<"Bomb";
        break;
       } 
    }
