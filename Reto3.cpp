#include <iostream>
using namespace std;

int main(){
    int contrasena=0, contra=12345;
        
    do{
        cout<<"Ingrese su contrasena de usuario: "<<endl;
        cin>>contrasena;
        
    }while(contrasena !=contra);
        cout<<"Contrasena correcta, iniciando sesion."<<endl;
    return 0;
}