#include <iostream>
using namespace std;

int main(){
    int num=0, sum=0, i=1;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    while(num>=i){
        sum = sum+i;
        i++;
    }

    cout<<"La suma de 1 hasta "<<num<<" es: "<<sum<<endl;

    return 0;
}