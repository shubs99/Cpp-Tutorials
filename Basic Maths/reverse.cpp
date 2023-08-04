#include<iostream>
using namespace std;


int reverseNumber(int n){
    int ans = 0;
    while(n>0){
		int ld = n % 10;
		ans = (ans*10) + ld;
		n = n/10;
	}
	return ans;
}


int main() {
	int n;
	cin>>n;
    cout << reverseNumber(n) << endl;

	return 0;
}


time complexity : O(n)   where n is the length of the given number
space complexity : O(1)

