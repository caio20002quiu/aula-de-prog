#include <stdio.h>

#include <locale.h>
#include <cmath>

using namespace std;

int opcao;
float resultado,valorA,valorB,valorX;
bool continuar = true;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    while(continuar){
        cout<<"--------MENU---------\n";
        cout<<" 1- SOMA             |\n";
        cout<<" 2- SUBATRA��O       |\n";
        cout<<" 3- MULTIPLICA��O    |\n";
        cout<<" 4- DIVIS�O          |\n";
        cout<<" 5- RAIZ             |\n";
        cout<<" 6- SAIR             |\n";
        cout<<"----------------------\n";
        cout<<"\n Informe a op��o que deseja calcular:\n";
        cin>>opcao;

    switch(opcao){
        case 1:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Op��o escolhida soma! \n";
                     resultado = valorA + valorB;
                    cout<<"A soma �: "<<resultado<<" \n";

                        break;

        case 2:


            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Op��o escolhida subtra��o! \n";
                     resultado = valorA - valorB;
                    cout<<"A subtra��o �: "<<resultado<<" \n";

                        break;
        case 3:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Op��o escolhida multiplica��o! \n";
                     resultado = valorA * valorB;
                    cout<<"A multiplica��o �: "<<resultado<<" \n";

                        break;
        case 4:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Op��o escolhida divis�o! \n";
                     resultado = valorA / valorB;
                    cout<<"A divis�o �: "<<resultado<<" \n";

                        break;

        case 5:


                cout<<"Informe o valorX: \n";
                cin>>valorX;

                        cout<<"Op��o escolhida foi divis�o! \n";
                        cout<<""A raiz �: "<<sqrt(valorX)<<"\n";


                    break;


         case 6:
                cout<<"Op��o escolhida  foi sair! \n";
                continuar =false;
                    break;
            default:
                    cout<<"op��o invalida! \n";
                        break;


            }


        }



        return 0;
    }
