#include <stdio.h>
#include <iostream>

using namespace std;
int valor1, valor2;

int main()
{
    cout<<"Informe o primeiro valor: \n";
    cin>>valor1;

    cout<<"Informe o segundo valor que seja diferente do primeiro: \n";
    cin>>valor2;

    if ( valor1 > valor2){
        cout<<"O primeiro valor e maior que o segundo \n";

    }
     else if (valor2 > valor1){
        cout<<"O segundo valor e maior que o primeiro \n";

     }


    return 0;
    }












