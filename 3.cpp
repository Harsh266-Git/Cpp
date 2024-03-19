#include <bits/stdc++.h>
using namespace std; 
int main() {
    char ch;
    cin>>ch;
    if(ch>='A'&& ch<='Z' || ch>='a' && ch<='z')
    {
        switch(ch)
        {
            case 'A':
                case 'E':
                    case 'I':
                        case 'O':
                            case 'U':
            case 'a':                
                    case 'e':                
                        case 'i':                
                            case 'o':                
                                case 'u': 
                cout<<"It's Vowel";
            break;
            default:
                cout<<"Not a Vowel";
        }
    }
    else{
        cout<<"the input isn't alphabet";
    }
    return 0;
}