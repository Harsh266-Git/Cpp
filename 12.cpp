#include <bits/stdc++.h>
using namespace std; 
int main() {
    int held,att;
    cout<<"Enter the classes held"<<endl;
    cin>>held;
    cout<<"Enter the attended classes"<<endl;
    cin>>att;
    cout<<endl;
    cout<<endl;
    int percent = (att*100) / held;
    if(percent<=75){
    cout<<"the total percent of attended classes by the student "<<percent<<"%"<<endl;
        cout<<"Not allowed!!!";
        cout<<endl;
    }
    else{
        cout<<"Allowed";
        cout<<endl;
    }
    return 0;
}