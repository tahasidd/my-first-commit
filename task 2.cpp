#include <iostream>
#include<math.h>
using namespace std;


int main()
{
	int sum=0;
int  n=0;
cout<<"enter a base: ";
cin>>n;

int b=0;
cout<<"enter the exponent: ";
cin>>b;

sum=pow(n,b);

cout<<n<<"^"<<b<<" = "<<sum;
}


