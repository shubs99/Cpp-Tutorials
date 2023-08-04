#include<iostream>
using namespace std;


int isPrime(int n){
	int count = 0;
	for(int i=1 ; i*i <= n; i++){
		if(n%i == 0){
          count ++;
          if(n/i != i){
           count ++;
          } 
        } 
		
	}
	if(count == 2) cout << "true";
	else cout << "false";
}

int main() {
	int n;
	cin >>n ;
	isPrime(n);
	return 0;
	
}


tc : O(sqrt(n))