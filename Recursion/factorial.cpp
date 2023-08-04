

// parameterised recursion
#include<iostream>
using namespace std;

void factorial(int i, int fact){
    if(i == 0){
      cout << fact;
      return;
    } 
factorial(i-1, fact*i);  
}


int main(){
    int n;
    cin >> n;
    factorial(n,1);
}



// functional recursion

// #include<iostream>
// using namespace std;

// int factorial(int i , int){
//     if(n == 0) return 1;
//     return n * factorial(n-1);
// }


// int main(){
//     int n;
//     cin >> n;
//     cout << factorial(n);
// }

