// print numbers 1 to n 

#include<iostream>
using namespace std;

void printNum(int i,int n){
    if(i>n)  return;
    cout << i << endl;
    printNum(i+1,n);
}


int main(){
    int n;
    cin>>n;
    printNum(1,n);
}



// print numbers n to 1

#include<iostream>
using namespace std;

void printNum(int n){
    if( n == 0)  return;
    cout << n << endl;
    printNum(n-1);
}


int main(){
    int n;
    cin>>n;
    printNum(n);
}

