//A jornada de trabalho semanal de um funcion�rio � de 40 horas. 
//O funcion�rio que trabalhar mais de 40 horas receber� hora extra, cujo c�lculo � o valor da hora regula
//Escreva um algoritmo que leia o n�mero de horas trabalhadas em um m�s,
//o sal�rio por hora e escreva o sal�rio total do funcion�rio, 
//que dever� ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o m�s possua 4 semanas exatas). 

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	
	float salario,salario_total,hora,salario_hora;
	float hora_extra,salario_extra;
	
	cout<<"Informe as horas trabalhadas em um mes:\n";
	cin>>hora;
	cout<<"Informe o salario por hora: \n";
	cin>>salario_hora;

	
	
	if(hora>160)
	{
		
	hora_extra = hora - 160;
	salario = hora_extra * (salario_hora * 1.5);
	salario = 160 * salario_hora;
	salario_total = salario_extra + salario;
	
	cout<"Salario total do funcionario: "<<salario_total<<" \n";
	
}

	else
	{
		salario_total = hora * salario_hora;
		cout<<"Salario total do funcionario: "<<salario_total<<"\n";
		
		
	}
	
	
	
	
	
	
	return 0;
}
