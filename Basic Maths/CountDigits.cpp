Extractio of digits 

Q1 Count the number of digits
input : 345
output : 3



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 0;
   

    while(n>0){
      n = n/10;
       count++;
       
    }
    cout << count << endl;
    return 0;
}


using function

#include<bits/stdc++.h>
using namespace std;


int count_digits(int n){
    int count = 0;
    while(n>0){
       n = n/10;
       count++;
    }
   return count ;
}

int main(){
    int n;
    cin>>n;
    cout << "The no of digits in " << n << " is " << count_digits(n) << endl;

    return 0;
    
}


time complexity : O(n)   where n is the number of digits in the number
space complexity : O(1)


Methd 2 : convery int to string and calculate lenght of string

#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
    string x = to_string(n);
    return x.length();
}

int main(){
    int n;
    cin>>n;
    cout << "The no of digits in " << n << " is " << count_digits(n) << endl;

    return 0;
    
}


time complexity : O(1)   
space complexity : O(1)


method 3 : Use logarithm base 10 to count the number of digits

The number of digits in an integer = the upper bound of log10(n).

n = 12345
log10(12345) = 4.091
Integral part of 4.091 is 4 and 4 + 1 =  5 which is also the number of digits in 12345

#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int digits = floor(log10(n) + 1);   // (int) (log10(n) + 1)
    return digits;
}

int main(){
    int n;
    cin>>n;
    cout << "The no of digits in " << n << " is " << count_digits(n) << endl;

    return 0;
    
}


time complexity : O(1)   
space complexity : O(1)