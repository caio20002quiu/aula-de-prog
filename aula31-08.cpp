#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int opcao;
float resultado,valorA,valorB;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"--------MENU---------\n";
    cout<<"| 1 - SOMA          |\n";
    cout<<"| 2 - SUBTRA��O     |\n";
    cout<<"| 3 - MULTIPLICA��O |\n";
    cout<<"| 4 - DIVIS�O       |\n";
    cout<<"--------====---------\n";
    cout<<"\n Informe uma op��o\n";
    cin>>opcao;

        cout<<"Informe o valorA: \n";
        cin>>valorA;
        cout<<"Informe o valorB: \n";
        cin>>valorB;




    switch(opcao){

        case 1:
                cout<<"Op��o escolhida soma! \n";
                 resultado = valorA + valorB;
                cout<<"A soma �: "<<resultado<<" \n";

                    break;

        case 2:
                cout<<"Op��o escolhida subtra��o! \n";
                resultado = valorA - valorB;
                cout<<"A subtra��o �: "<<resultado<<" \n";

                    break;

        case 3:
                cout<<"Op��o escolhida mutiplica��o! \n";
                   resultado = valorA * valorB;
                   cout<<"A multiplica��o � : "<<resultado<<" \n";
                    break;

        case 4:
                cout<<"Op��o escolhida divis�o! \n";
                   resultado = valorA/valorB;
                cout<<" a divs�o �: "<<resultado<<" \n";
                    break;
        default:
                cout<<"op��o invalida! \n";
                    break;
    }


  return 0;
}
