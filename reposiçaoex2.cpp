#include <stdio.h>
#include <iostream>

using namespace std;
int ano;

 int main()
{
    cout<<"Informe o ano que voce nasceu: \n";
    cin>>ano;

    if (ano > 2006){
        cout<<"Voce ainda nao pode tirar seu titulo de eleitor \n";
    }
    else if (ano < 2006){
        cout<<"Voce ja pode tirar seu titulo de eleitor e pode votar \n";
    }


    return 0;
    }












