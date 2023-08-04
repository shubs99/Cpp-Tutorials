// numbers

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i < n; i++){
//         cin >> arr[i];
//     }

//map<int,int> mpp;
// for(int i=0; i < n; i++){
//     mpp[arr[i]]++;
// }

// int q;
// cin >> q;
// while(q--){
//     int number;
//     cin >> number;
//     cout << mpp[number] << endl;
// }

// return 0;

// }


// charcters

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

map<char,int> mpp;
for(int i=0; i < n; i++){
    mpp[arr[i]]++;
}

int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
    cout << mpp[number] << endl;
}

return 0;

}

storing and fetching takes logarithmic time : log(N)

// for unordered map

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

unordered_map<char,int> mpp;
for(int i=0; i < n; i++){
    mpp[arr[i]]++;
}

int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
    cout << mpp[number] << endl;
}

return 0;

}

TC for storing n fetching best & avg case : O(1) , worst case : O(N)