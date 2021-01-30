#include<iostream>
using namespace std ;
int main (){
 int t ; 
 cin >> t ; 
 for (int j = 0 ; j<t; j++){
 
 int n , c ; cin >> n ; 
 int arr[n] ; 
 for (int i = 0 ; i < n  ; i++) {
 	cin >> arr[i] ; 
 }
 c = 0 ;
 
 R:
  for ( int i = 0 ;i < n  ; i++)
  {
  	if (arr[i] %2==0 && i!=0){
  	arr[i] = arr[i] + arr[i-1] ;
  	c++ ; }
  	else if (arr[i] %2==0 && i==0){
  	arr[i] = arr[i] + arr[i+1] ;
  	c++ ; }
  }
  int odd = 0 ; 
 for (int i = 0 ; i < n  ; i ++) {
 	if (arr[i] % 2 != 0 )
	  odd ++ ; 
 }
  
  if (odd == n ) cout << c <<endl ; 
  else if (odd==0 ) cout <<-1<<endl  ; 
  else if (odd<n) goto R ;
 }
 
}
