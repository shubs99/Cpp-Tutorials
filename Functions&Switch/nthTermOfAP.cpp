// given formula for nth term of an AP find it

#include<iostream>
using namespace std;

int termOfAP(int n){
  int term = 3*n+7;
  cout<<term;
  return term;
}



int main(){
    int n;
    cin>>n;
    cout << "nth term of an AP is : ";
    termOfAP(n);
}