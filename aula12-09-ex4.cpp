#include <iostream>
#include<stdio.h>

/*FAÇA UM PROGAMA QUE RECEBA A IDADE DE 8 PESSOAS .
QUANTIFIQUE A QUANTIDADE DE PESSOAS EM CADA FAIXA ETARIA DE ACORDO COM A TABELA
FAIXA ETARIA			IDADE
PRIMEIRA				ATE 15 ANO	
SEGUNDA					DE 16 ANOS ATE 30 ANOS
TERCEIRA				DE 31 ANOS ATE 45 ANOS	
QUARTA					DE 46 ANOS ATE 60 ANOS
QUINTA 					ACIMA DE 60 ANOS*/


using namespace std;


int main()
{
	int idade,i,acumulador_1,acumulador_2,acumulador_3,acumulador_4,acumulador_5,acumulador_6,acumulador_7,acumulador_8;
	
	float per_1,per_5;
	
	acumulador_1 = 0;
	acumulador_2 = 0;
	acumulador_3 = 0;
	acumulador_4 = 0;
	acumulador_5 = 0;
	acumulador_6 = 0;
	acumulador_7 = 0;
	acumulador_8 = 0;
	
	
	
	
	for(i=1;  i<=8; i++)
	{
		cout<<"Informe as idades de cada pessoa "<<i<<" \n";
		cin>> idade;
		
		while(idade<0)
		{
			cout<<"Idade invalida!:";
		}
		
		
		if (idade<=15)
		{
			acumulador_1++;
		}
		if ((idade>15)&&(idade <= 30))
		{
			acumulador_2++;
		}
		if ((idade>30)&&(idade<=45))
		{
			acumulador_3++;
		}
		if ((idade>45)&&(idade<=60))
		{
			acumulador_4++;
		}
		else
		{
			acumulador_5++;
		}
		
	
	cout<<"\nPessoas na primeira faixa etaria "<<acumulador_1;
	cout<<"\nPessoas na segunda faixa etaria "<<acumulador_2;
	cout<<"\nPessoas na terceira faixa etaria "<<acumulador_3;
	cout<<"\nPessoas na quarta faixa etaria "<<acumulador_4;
	cout<<"\nPessoas na quinta faixa etaria "<<acumulador_5;
	
	percentual_1 = 100*(acumulador_1/8.0);

	
	cout<<"\n\t O percentual de pessoas da primeira faixa: "<<per_1<<" ; 
	
	

	
  
}

