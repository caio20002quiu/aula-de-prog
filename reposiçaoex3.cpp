#include <stdio.h>
#include <iostream>

using namespace std;
int senha;

 int main()
{
    cout<<"Informe a senha: \n";
    cin>>senha;

    if (senha == 1234){
    cout<<"ACESSO PERMITIDO \n";
    }
    else if (senha!=1234){
    cout<<"ACESSO NEGADO \n";
    }


    return 0;
    }












