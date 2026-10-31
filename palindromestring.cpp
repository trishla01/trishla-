#include <iostream>
using namespace std;
int main(){
    string a= "TURTLE";
    cout<<a<<endl;
    a.length();
    string rev="";
    for(int i = a.length() - 1; i >= 0; i--) {
        cout<<a[i];
        rev=a[i];
    }
    if ( a== rev){
        cout<<" \nstring is palindrome ";
    }
    else{
        cout<<"\n string is not palindrome";
     }

    return 0;
}