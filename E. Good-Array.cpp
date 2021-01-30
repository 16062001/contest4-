#include<iostream>
using namespace std ;
int main (){
int n ; cin >> n ; 
int x = n/2 ;
int arr[n] ;
for (int i =0 ; i < n ; i++)
{
	cin >> arr[i] ; 
}
int c  = 0 ; 
for (int i = 0  ; i < x ; i ++)
{
	if (arr[i]==arr[i+x]*0.5)
	c++ ; 
}
if (c==x)  cout <<"GOOD" ;
else cout << "NOT GOOD" ;

}

