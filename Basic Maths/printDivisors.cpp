#include<bits/stdc++.h>
using namespace std;

int printDivisors(int n){
   for(int i=1;i<=n;i++){
    if(n%i == 0) cout << i << " ";
}


int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}

// TC : O(n)
// SC : O(1) 


// optimized code (sqrt(n) time compl)

#include<bits/stdc++.h>
using namespace std;

int printDivisors(int n){
    vector<int> ls;
// time complexity : O(sqrt(n))
   for(int i = 1; i < sqrt(n); i++){  // sqrt(n) can also be written as i*i < n
    if(n%i == 0) ls.push_back(i);
    if(n/i != i) ls.push_back(n/i);
   }
   // O(n log(n))
   sort(ls.begin(), ls.end());
   // O(n) n : no of factors
   for(auto it : ls) cout << it << " ";
}

int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}


// time complexity : O(sqrt(n)) + O(n log(n)) + O(n)  ~ O(sqrt(n))
// SPACE COMPLXITY : O(1) as no extra space needed