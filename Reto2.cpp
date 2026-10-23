#include <iostream>
using namespace std;

int main(){
    int num=0, i=1;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    while(i<=10){
         cout<<num<<" x "<<i<<" = "<<num*i<<endl;
         i++;
    }

    return 0;
}