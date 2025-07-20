#include <iostream>
using namespace std;

int main() {
    
    char char1;
    cout<<"Enter a charecter:";
    cin>>char1;
    if(char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u'||char1=='A'||char1=='E'||char1=='I'||char1=='O'||char1=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    return 0;
}
