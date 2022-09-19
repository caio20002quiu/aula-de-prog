#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	//crie um programa que receba 10 valores inteiros e positivos, o programa deve: 
	//mostrar os valores repitidos recebidos
	//quantificar a quantidade de valores repetidos
	
	
	
	int num[10],iguais[10];
	int i,a,k=0;
	
	for (i=0; i<10;i++)
	{
		cout<<"Informe o valores inteiros e positivos"<<i<<"\n";
		cin>>num[i];
	
	}	
	
	for (i=0;i<10;i++)
	{
		for(a= i + 1;a < 10; a++)	
		{
		
			if(num[i]==num[a])
			{
				iguais[k]=num[a];
				k++;
			}
		}
		
	}	
	cout<<"quantidade de iguais: "<<k"\n";
	 
	for(k=)

	
	return 0;
}
