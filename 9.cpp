#include<bits/stdc++.h>
using namespace std; 
int main() {
    cout<<"Enter the bit to check weather it is number-character or digit"<<endl;
    char ch;
    cin>>ch;
    if((ch>='A'&& ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"That's Character!!";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"That;s number";
    }
    else{
        cout<<"That's symbol";
    }
    return 0;
}