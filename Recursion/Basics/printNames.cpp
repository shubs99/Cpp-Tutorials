// print your name n times using recursion

#include<iostream>
using namespace std;

void print(int i,int n){
  if(i>n) return;
  cout << "shubhangi" << endl;
  print(i+1,n);
}


int main(){
    int n;
    cin>>n;
    print(1,n);
}


TC : O(n)
SC : O(n) , stack space as n functions are stored in stack