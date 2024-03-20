#include <bits/stdc++.h>
using namespace std; 
int main() {
    int sal,yr,bonus;
    cout<<"Enter the salary"<<endl;
    cin>>sal;
    cout<<"Enter the year"<<endl;
    cin>>yr;
    if(yr>5){
        bonus=sal+(sal*5/100);
        cout<<"the bonused salary is "<<bonus;
    }
    else{
        cout<<"the annual salary is "<<sal;
    }
    return 0;
}