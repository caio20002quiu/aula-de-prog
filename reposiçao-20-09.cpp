#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	//1.Fa�a um programa para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos. 
	//Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores. 
	
	float eleitores,v_branco, v_nulos, v_validos;
	float percentual;
	
	cout<<"Informe a quantidade de eleitores de seu municipio:\n";
	cin>>eleitores;
	cout<<"Informe a quantidade de votos em branco tiveram:\n";
	cin>>v_branco;
	cout<<"Informe a quantidade de votos nulos tiveram:\n";
	cin>>v_nulos;
	cout<<"Informe a quantidade de votos validados tiveram:\n";
	cin>>v_validos;
	
	
	
	percentual = (v_branco/eleitores) * 100;
	
	cout<<"O percentual de votos em brancos foi: "<<percentual<<"%\n";
	
	percentual =(v_nulos/eleitores) * 100;
	
	cout<<"O percentual de votos nulos foi: "<<percentual<<"%\n";
	
	percentual =(v_validos/eleitores) * 100;
	
	cout<<"O percentual de votos validos foi: "<<percentual<<"%\n";
	

	
	
	return 0;
}
