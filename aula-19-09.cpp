#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int i;
	
	int vet_int1[] = {1,2,3,4,5};
	float vet_real1[] = {1.25,-6.4,8};
	char vet_caractere1[] = {'a','e','i','o','u'};
	
	
	
	for (i=0; i<4; i++)
	
		{
		
		cout<<vet_int1[i]<<" \n";
	}
	for (i=0; i<2; i++)
	
		{
		
		cout<<vet_real1[i]<<"\n ";
	}
	
	for (i=0; i<4; i++)
		
		{
		
		cout<<vet_caractere1[i]<<"\n ";
	}
	
	int vet_int2[5];
	
	for(i=0; i<5; i++);
	{
		cout<<"informe os vetores inteiros:"<<i<<"\n";
		cin>> vet_int2[5];
	}


	for(i=0;i<5;i++);
	{
		
		cout<<vet_int2[i]<<"";
	}
	
	
	int vet_real2[i];
	cout<<"\n\n";
	cout<<"Informe os 3 valores reais para o vetor:";
	
	for(i=0;i<3;i++)
	{
		
		cin>>vet_real2[i];
		}
		
			for(i=0;i<3;i++)
	{
		
		cout<<vet_real2[i]<<"  ";
		}	
		
	
	
	
	
	
	
	
	
	
	return 0;
}
