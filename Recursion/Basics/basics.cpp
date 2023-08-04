// a function that calls itself again and again until a condition is met

// no base condition to stop so stack overfloww error will come after some running

#include<iostream>
using namespace std;


void print(){
    cout << "1" << endl;
    print();
}
int main(){
    print();
    return 0;
}


// with base condition

#include<iostream>
using namespace std;

int count = 0;
void print(){
   
    if(count == 3){
        return;
    }
    cout << count << endl;
    count++;
    print();
}
int main(){
    
    print();
    return 0;
}