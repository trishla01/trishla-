#include<iostream>
using namespace std;
int main (){
    int num;
    cout << " enter the number for inspection";
    cin>> num;
    int copycat= num;
    int a=0;
    while (copycat>0){
        copycat=copycat/10;
        a+=1;
    }
    cout<< "" << a;
    return 0;
    
}