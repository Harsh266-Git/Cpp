#include <iostream>
using namespace std; 
int main() {
    cout<<"Enter the number to check weather it is even or odd";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"The number is Even";
    }
    else{
        cout<<"The number is Odd";
    }
    return 0;
}