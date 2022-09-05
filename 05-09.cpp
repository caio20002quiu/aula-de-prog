#include <stdio.h>
#include <iostream>

using namespace std;

int pontoA,pontoB,pontoC;


int main()
{
    cout<<"Informe o ponto a: \n";
    cin>>pontoA;
    cout<<"Informe o ponto b: \n";
    cin>>pontoB;
    cout<<"Informe o ponto c: \n";
    cin>>pontoC;




    if (pontoA + pontoB > pontoC && pontoB + pontoC > pontoA && pontoA + pontoC > pontoB ){

        cout<<"Pode ser um tringulo: \n";
        }else

            cout<<"Nao pode ser um triangulo: \n";
            {

         if (pontoA == pontoB  && pontoA == pontoC){



            cout<<"E um triangulo equilatero! \n";}


            if (pontoA == pontoB   || pontoA == pontoC || pontoB == pontoC){


            cout<<"E um triangulo isosceles! \n";}

        else
            {

            cout<<"E um triangulo escaleno! \n";



    return 0;


}

            }
}
