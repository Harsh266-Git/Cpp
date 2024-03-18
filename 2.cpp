#include <bits/stdc++.h>
using namespace std;

int main(){
    int qty,rate,dis;
    cout<<"enter the qty ";
    cin>>qty;
    cout<<"enter the rate ";
    cin>>rate;
    if(qty*rate>= 1000)
    {
        dis= (qty*rate)*10/100;
    }
    else{
        dis=0;
    }
    int Total=(qty*rate)-dis;
    cout<<Total;
    return 0;
}