#include <stdio.h>
#include <iostream>
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
        cout<<" 2- SUBATRAÇÃO       |\n";
        cout<<" 3- MULTIPLICAÇÃO    |\n";
        cout<<" 4- DIVISÃO          |\n";
        cout<<" 5- RAIZ             |\n";
        cout<<" 6- POTENCIAÇÃO      |\n";
        cout<<" 7- SAIR             |\n";
        cout<<"---------------------\n";
        cout<<"\n Informe a opção que deseja calcular:\n";
        cin>>opcao;

    switch(opcao){
        case 1:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Opção escolhida soma! \n";
                     resultado = valorA + valorB;
                    cout<<"A soma é: "<<resultado<<" \n";

                        break;

        case 2:


            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Opção escolhida subtração! \n";
                     resultado = valorA - valorB;
                    cout<<"A subtração é: "<<resultado<<" \n";

                        break;
        case 3:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Opção escolhida multiplicação! \n";
                     resultado = valorA * valorB;
                    cout<<"A multiplicação é: "<<resultado<<" \n";

                        break;
        case 4:

            cout<<"Informe o valorA: \n";
            cin>>valorA;
            cout<<"Informe o valorB: \n";
            cin>>valorB;

                    cout<<"Opção escolhida divisão! \n";
                     resultado = valorA / valorB;
                    cout<<"A divisão é: "<<resultado<<" \n";

                        break;

        case 5:


                cout<<"Informe um valor: \n";
                cin>>valorX;

                        cout<<"Opção escolhida foi divisão! \n";
                        cout<<"A raiz é: "<<sqrt(valorX)<<"\n";
                    break;
                    
        case 6:
				cout<<"Informe um valor: \n";
				cin>>valorX;
						
						cout<<"Opção escolhida foi potenciação ! \n";
						resultado = valorX * valorX;
						cout<<"o valor ao quadrado é: "<<resultado<<"\n";            
                    
         case 7:
                cout<<"Opção escolhida  foi sair! \n";
                continuar =false;
                    break;
            default:
                    cout<<"opção invalida! \n";
                        break;
            }
        }
        return 0;
    }
