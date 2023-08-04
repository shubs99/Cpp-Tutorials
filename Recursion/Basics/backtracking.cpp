// print 1 to n by backtracking

#include<iostream>
using namespace std;

void printNum(int i, int n){
   if(i<1) return ;
   printNum(i-1,n);
   cout << i << endl;
}


int main(){
    int n;
    cin>>n;
    printNum(n,n);
}


// print n to 1 by backtracking

#include<iostream>
using namespace std;

void printNum(int i, int n){
   if(i<1) return ;
   printNum(i-1,n);
   cout << n-i+1 << endl;
}


int main(){
    int n;
    cin>>n;
    printNum(n,n);
}