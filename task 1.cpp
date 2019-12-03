#include <iostream>
using namespace std;
int num(int N);
int main()
{
int  N=0;
cout<<"enter a positive integer: ";
cin>>N;

cout<<"sum= "<<num(N);
return 0;
}

int num(int N)
{
	
 if (N>=0)
 return N+num(N-1);
 return 0;
   
   
}
