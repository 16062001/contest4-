#include<iostream>
using namespace std ;
int main (){
int n ; cin >> n ; 	
int arr[n] ; 
for (int i =0 ; i < n ; i++)
{
	cin >> arr[i] ; 
}
int mx = 0 ;
int c = 0 ; 
for (int i = 0 ; i< n ; i++){
	for (int j = i ; j<n ; j++){
		if (i-j<=1 || j-i<=1)
		{
			c++;
			if (c>mx)
			mx = c ;
	    }
	    
		else 
		break ;
	}
}	

cout << mx ; 
}

