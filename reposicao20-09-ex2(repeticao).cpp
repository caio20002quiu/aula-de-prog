#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;


//Faça um programa que receba dois números inteiros, diferentes de zero,
// e execute as operações listadas a seguir, de acordo com a escolha do usuário
	
	int nA,nB,operacao;
	float numero,media,diferenca,raiz_quadrada,raiz_cubica,resultado;	
	bool continuar = true;
	

int main()
{
	
	while(continuar)
	{
		
		cout<<"1 - Media entre os dois numeros\n";
		cout<<"2 - A diferenca do maior pelo menor\n";
		cout<<"3 - A raiz quadrada do primeiro numero\n";
		cout<<"4 - A raiz cubica do segundo numero\n";
		cout<<"Informe a operacao que deseja calcular:\n";
		cin>>operacao;
	
		
		switch(operacao){
			
		case 1:
			cout<<"Informe o valorA inteiro diferente de 0: \n";
            cin>>nA;
            cout<<"Informe o valorB inteiro diferente de 0: \n";
            cin>>nB;
            
        	cout<<"A operaçao escolhida foi media\n";
            resultado = ((float)nA + (float)nB) / 2.0;  //CASTING
            cout<<"A media dos numeros é: "<<resultado<<" \n";
			break;
			
		case 2:
			cout<<"Informe o valorA inteiro diferente de 0: \n";
            cin>>nA;
            cout<<"Informe o valorB inteiro diferente de 0: \n";
            cin>>nB;
            
            cout<<"A operacao escolhida foi diferenca! \n";
            
            if (nA>nB){
			
            resultado = nA + nB;
			cout<<"A diferenca eh: "<<resultado<<"\n";
		}
			
			else if (nB>nA)	{
				resultado = nB + nA;
			cout<<"A diferenca eh: "<<resultado<<"\n";
			}
			
			break;
		
		case 3:
			cout<< " informe o numero que queira tirar a raiz quadrada: \n";
			cin>>nA;
			cout<<"A raiz do numero eh: "<<sqrt(nA)<<"\n";
			
			break;
			
		case 4:
			cout<< " informe o numero que queira tirar a raiz cubica: \n";
			cin>>nB;
			cout<<"A raiz cubica do numero eh:"<<cbrt(nB)<<" \n";
			
			
			break;
			
		case 5:
			cout<<"Operacao nao escolhida! \n";
			continuar = false;
			
			break;
			
	
			
		default:
			cout<<"Opcao invalida!\n";
				break;
			
		}
		
	
	}
	

	return 0;
	
}
























