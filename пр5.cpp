#include<bits/stdc++.h>
using namespace std;
 
int main (){
	int k;
	double a , px = 0 ;

	cout << "a=";
	cin >> a ;
	cout << "k=";
	cin >> k ;
	double x0 = a, xi;
	for(int i=1;1<=k;i++){
		xi = (((k-1)*x0)/k) + (a/(pow(xi,k-1)));
		px += xi;//sum
		
		//while(fabs(pow(xi,k)-a)<0.0001 && k>10){
		if( k>10 && fabs(pow(xi,k)-a)<0.0001){
			cout << "i=" << i << "px=" << px << endl;
			break;
		}
		x0 = xi;
	}
	
  return 0;
}
