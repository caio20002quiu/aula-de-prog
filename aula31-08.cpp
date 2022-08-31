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
    cout<<"| 2 - SUBTRAÇÃO     |\n";
    cout<<"| 3 - MULTIPLICAÇÃO |\n";
    cout<<"| 4 - DIVISÃO       |\n";
    cout<<"--------====---------\n";
    cout<<"\n Informe uma opção\n";
    cin>>opcao;

        cout<<"Informe o valorA: \n";
        cin>>valorA;
        cout<<"Informe o valorB: \n";
        cin>>valorB;




    switch(opcao){

        case 1:
                cout<<"Opção escolhida soma! \n";
                 resultado = valorA + valorB;
                cout<<"A soma é: "<<resultado<<" \n";

                    break;

        case 2:
                cout<<"Opção escolhida subtração! \n";
                resultado = valorA - valorB;
                cout<<"A subtração é: "<<resultado<<" \n";

                    break;

        case 3:
                cout<<"Opção escolhida mutiplicação! \n";
                   resultado = valorA * valorB;
                   cout<<"A multiplicação é : "<<resultado<<" \n";
                    break;

        case 4:
                cout<<"Opção escolhida divisão! \n";
                   resultado = valorA/valorB;
                cout<<" a divsão é: "<<resultado<<" \n";
                    break;
        default:
                cout<<"opção invalida! \n";
                    break;
    }


  return 0;
}
