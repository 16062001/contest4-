#include<iostream>
using namespace std ;
int main ()
{
	int s , x ; 
	cin >> s >> x ; 
	int c = 1 ; 
	for (int i = 0 ; s>=x ; i++)
	{ 
	s=s/x ; 
	c++ ;
	}
	cout << c ; 
}
