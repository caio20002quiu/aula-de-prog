#include <stdio.h>
#include <iostream>

using namespace std;
float custo;
int  maca;

 int main()
{
    cout<<"Informe quantas macas comprou: \n";
    cin>>maca;

    if ( maca < 12 ){
        custo = maca * 0.30;

    }
    else if (maca >= 12){
        custo = maca * 0.25;

    }

    cout<<"O custo foi de: "<<custo<< "\n";


    return 0;
    }












