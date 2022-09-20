//Faça um programa para ler: número da conta do cliente, saldo, débito e crédito.
// Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
// Também testar se saldo atual for maior ou igual à zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.

#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int main()

{
	
	int Nconta;
	float saldo,debito,credito,saldo_at,saldo_p,saldo_n;
	
	
	cout<<"informe o numero da conta:\n";
	cin>>Nconta;
	cout<<"Informe o saldo:\n";
	cin>>saldo;
	cout<<"Informe o debito:\n";
	cin>>debito;
	cout<<"Informe o credito:\n";
	cin>>credito;
	
	
	saldo_at = saldo - debito + credito;
	
	if (saldo_at>=0)
	 {
		
		cout<<"Saldo positivo ! \n";
		cout<<"valor do salto: "<<saldo_at<<" \n";
		
	 } 
	 
	else
	 {
		
	cout<<"saldo negativo! \n";
	cout<<"valor do saldo "<<saldo_at<<"\n";
		
	}
	

	
	return 0;
}
