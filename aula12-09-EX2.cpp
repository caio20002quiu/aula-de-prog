#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	
	int X,I;
	float A,Y;
	
	cout<<"Informe um numero X:";
	cin>>X;
	cout<<"Informe um numero A:";
	cin>>A;
	
	Y = 1;
	for (I = 1 ; I<=X ; I++ )
	{
		Y = Y*A;
	}
	
	cout<<"\n"<<A<<"^"<<X<<"="<<Y;
	
	
	
	
	return 0;
}

