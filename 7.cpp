#include <iostream>
using namespace std; 
int main() {
    cout<<"Enter the marks of each subject";
    cout<<endl;
    cout<<"NOTE:Maximum marks should be 100";
    cout<<endl;
    int phy, chem, math;
    cin>>phy;
    cin>>chem;
    cin>>math;
    int avg=(phy+chem+math)/3;
    cout<<"the average of the marks is "<<avg;
    cout<<endl;
    if(avg>=80){
        cout<<"Grade: A";
    }
    else if(avg<80 && avg>=60){
        cout<<"Grade: B";
    }
    else if(avg<60 && avg>=40){
        cout<<"Grade: C";
    }
    else{cout<<"Grade: D";};
    
    return 0;
}