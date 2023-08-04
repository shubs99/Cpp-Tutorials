// sum of first n number


// parameterised recursion

#include<iostream>
using namespace std;

void printSum(int i,int sum){
 if(i<1){
    cout << sum;
    return;
 }
printSum(i-1,sum + i);
}




int main(){
    int n;
    cin>>n;
    printSum(n,0);

}



// functional recursion

#include<iostream>
using namespace std;

int printSum(int n){
 if(n == 0) return 0;
 return n + printSum(n-1);
}




int main(){
    int n;
    cin>>n;
    cout << printSum(n);

}
