//A jornada de trabalho semanal de um funcionário é de 40 horas. 
//O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regula
//Escreva um algoritmo que leia o número de horas trabalhadas em um mês,
//o salário por hora e escreva o salário total do funcionário, 
//que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas). 

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
