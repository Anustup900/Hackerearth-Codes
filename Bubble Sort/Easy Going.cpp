#include <iostream>
using namespace std ;
int main(){
    int T;
    cin >>T;
    int a1,a2,a3,a4,a5;
    cin>>a1>>a5;
    cin>>a1>>a2>>a3>>a4>>a5;
    int d= (a5-a1);
    int e=(a1+a2+a3+a4);
    int f=(a2+a3+a4+a5);
    int g=(f-e);
    if(g==d){
        cout<<d<<"";
        
    }
}
