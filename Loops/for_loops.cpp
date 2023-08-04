
// incr-decr , for loop , 

// #include <iostream>
// using namespace std;

// int main() {
//   int i=7;
//   cout<< i++ << endl; // i=7 ,  incr later i=8
//   cout<< ++i <<endl; // i=9, incr first 
//   cout<< i-- <<endl; // i=9 , decr later , i=8
//   cout<< --i<<endl; // i=7 , decr first

//   return 0;
// }

// for loop 
// print 1 to 5 

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout <<"enter a number ";
//   cin>> n;

//   for(int i=1;  i<=n;i++){
//     cout<< i <<endl;
//   }
//   return 0;
  
// }

// the above for loop can also be written as 

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout <<"enter a number ";
//   cin>> n;
//   int i=1;
//   for(;  ;){
//     if(i<=n){
//       cout<< i <<endl;
//     }
//     else{
//       break;
//     }
//     i++;
    
//   }
//   return 0;
  
// }


// a single for loop can also have multiple conditions


// #include <iostream>
// using namespace std;

// int main(){
//   int n;
  
 
//   for(int a=0, b=1 , c=2 ; a>=0 && b<=1 ; a--, b--, c--){
//    cout<< a <<" "<<b<< " "<< c<< endl;
//   }
   
//     return 0;
// }

// Q1. Sum of numbers from 1 to n

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter a num "<<endl;
//   cin>>n;
//   int sum=0;
//   for(int i=1; i<=n ; i++){
//     sum += i;
//   }
//   cout<< sum <<endl;
// }



// Q2. Print fibonacci series
// 0 1 1 2 3 5 8 13 ...
// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout <<"enter how many numbers you want to print? "<<endl;
//   cin>>n;
//   int a=0, b=1 ;
//   cout <<a <<" "<<b<<" ";
//   for(int i=1;i<=n;i++){
//     int nextNumber = a+b;
//     cout<< nextNumber<<" ";
//     a=b;
//     b=nextNumber;
//   }
//  return 0;
//     }


// Q3. print no is prime or not

// method I

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter the number to ckeck ";
//   cin>>n;
//   for(int i=2; i<n ; i++){
//      if(n%i==0){
//        cout<<"not a prime number"<<endl;
//        break;             //doubt
//     }
//     else{
//       cout<<"num is prime"<<endl;
//     }
//   }
//   return 0;
// }


// method II

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   bool isPrime = 1;
//   cout<<"enter the number to ckeck ";
//   cin>>n;
  
//   for(int i=2; i<n ; i++){
//         if(n%i==0){
//            isPrime = 0;
//            break;
//           }
//      } 
//   if (isPrime==0){
//     cout<<"not a prime"<<endl;
//   }
//   else{
//     cout<<" is a prime"<<endl;
//   }
//   return 0;
// }


// continue : not execute lines of code after continue

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int i=0; i<=n ;i++){
//     cout<<"hey"<<endl;
//     cout<< "hii"<<endl;
//     continue;
//     cout<<"reply toh kr de"<<endl;
//   }
//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
    
    for(int i=0;i<=15;i+=2){
        int n;
        cout<<"enter kr";
         cin>>n;
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
}
