#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	//Fn = fn- + Fn-2
	int vet_pos[30],i,posicao;
	
	vet_pos[0]=1;
	vet_pos[1]=1;
	

	for (i=2; i<30; i++)
	
	{
		
		vet_pos[i]= vet_pos[i-1] + vet_pos[i-2];
		
	}
	
	for (i=0; i<30; i++)
	{
		
		cout<<"posicao: "<< i+1<<"    "<<"Fibonoatti: "<<vet_pos[i]<<"\n";
	}
	
	
	cout<<"\n\nInforme a posicao que deseja calcular:";
	cin>>posicao;
	cout<<"O valor de fibonacci "<<posicao<<" eh: "<<vet_pos[posicao - 1];
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
