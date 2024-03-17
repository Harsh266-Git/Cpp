#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    a>b&&a>c?cout<<a<<"is GOAT":b>c?cout<<b<<" is GOAT":cout<<c<<"is GOAT";
    return 0;
} 