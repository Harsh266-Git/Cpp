#include <iostream>
using namespace std; 
int main() {
    cout<<"Enter the bit to check weather it is number-character or digit"<<endl;
    char ch;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"UpperCase!!";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"LowerCase!!";
    }
    else{
        cout<<"Not looking character";
    }
    return 0;
}