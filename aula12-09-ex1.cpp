#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	
	float P, acumulador, media;
	int i,n_notas;
	
   cout<<"Informe o numero de notas para calculo da media";
   cin>>n_notas;
   

	acumulador = 0;	
	for(i=1;  i<=n_notas; i++)
	{
		cout<<"Informe a nota da P"<<i<<": ";
		cin>>P;
		while ((P<0) || (P>10))
		{
			cout<<"\n\t\t AETNCAO! Nota invalida";
			cout<<"\n\t\t nota deve estar entre 0 e 10";
			cout<<"Informe a nota da P: "<<i<<"";
			cin>>P;
		
		}
		acumulador = acumulador  + P;
	}
	
	media = acumulador/ n_notas;
	cout<<"Media = "<<media;
	
	return 0;
}

