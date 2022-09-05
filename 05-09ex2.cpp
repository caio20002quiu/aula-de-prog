#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    float media,nota1,nota2;                        //p1 e p2nao pode ser menor que zero

    cout<<"Informe a nota 1:\n";
    cin>>nota1;
    while (nota1 < 0)
    {
        cout<<"A nota deve ser positiva. \n Informe a nota 1:";
        cin>>nota1;

    }

    cout<<"Informe a nota 2:\n";
    cin>>nota2;
    while(nota2 < 0)
    {

      cout<<"A nota deve ser positiva. \n Informe a nota 2:";
      cin>>nota2;
    }

     media = (nota1+nota2)/2;
     cout<<"A media das notas foi: "<<media<<" \n";






 return 0;
}
