

CONTAINER 1 : VECTOR

// vector is a container that is dynamic is nature that is change its size according to need. u can use it where you 
// dont know size of value to be stored 


void expVector(){
vector <int> v;

v.push_back(1);  // pushes an item 

v.emplace_back(2);  // pushes an element at back of vector , ususally faster than push back


vector<<pair><int, int>> v;

v.push_back({1,2});  // pushes an item 

v.emplace_back(2,3); 

vector<int> v(5,100)   //  means a container with 5 instances of 100

vector<int> v1(5,100) 
vector<int> v2(v1);     // copied v1 in v2


}

// accessing vectors

method 1:  v[0] , v[1] // similar to arrays
method 2 : usig iterators

vector<int>::iterator it = v.begin();   // iterates point to the memory address
it++;
cout << *(it) << " "

vector<int>::iterator it1 = v.rbegin();   

//{12,34,56,78,11} memory location will point after 11 , if we do after it--, then it will point to 11

vector<int>::iterator it2 = v.rend(); // reverses i.e {11,78,56,34,12} ^   it will point after 12
//                                                                     | 
                                                                
vector<int>::iterator it3 = v.end();

cout<< v.back()    {12,23,44}   // it will point 44


// for loop to print elements in vector 

for(vector<int>::iterator it= v.begin(); it!=v.end(); it++){
    cout << *(it) <<" ";
}

// instead of defining the iterator we can use auto which will automatically assign a data type without mentioning

for( auto it=v.begin(); it!=v.end(); it++){
    cout << *(it) <<" ";
}

// further use auto to shoeten the code 
for(auto: v){
    cout<< it << " ";
}


// delete the vector
v.erase(v.begin()+1);

// delete multiple entries/elements

// {12,23,56,88,34}
v.erase[start,end) i.e start is included , end is not included   
v.erase(v.begin()+2, v.begin()+4);  //{12,23,34}

// insert function
vector<int> v(2,100);  //{100,100}
v.insert(v.begin(),300) // {300,100,100}

// insert multiple elements

v.insert(v.begin()+1,2,10) // {300, 10,10,100,100}

// how many elements in vector
// {10,20}
v.size() //2

//pops out last element
// {10,20}
v.pop_back(); // 10

// swaps the vector
// v1 = {10,45}
// v2 = {21,44}
v.swap(v2); // v1 = {21,44} , v2 = {10,45}

// clears the entire vector
v.clear(v1);
v.empty(v5);


CONTAINER 2 : LIST  

// list is a container dynamic in nature. Insert func in vector is costly , internal operation happens in doubly 
// linked list unlike vector where single linked list is used

void expList(){

    list<int> ls ;
    ls.push_back(2); // {2}
    ls.emplace_back(1); // {2,4}
    ls.push_front(5) ; //{5,2,4}
    ls.emplace_front(); //
   
   // rest functions end, rend , rbegin everything is same as vector
}


CONTAINER 3 : DEQUEUE 

void explainDeque(){  
    deque<int>dq;
    dq.push_back(1);  //{1}
    dq.emplace_back(2); // {1,2}
    dq.emplace_front(3); // {3,4,1,2}
    dq.push_front(2); {2,1,3}

    dq.pop_front();  //{3,4,1}
    dq.push_back();  // {4,1}

    dq.back();
    dq.front();

    // rest functions are same as vector 
    // begin,end,rbegin,rend , clear,insert,size,swap
}



CONTAINER 3 : STack (LIFO)

void explainStack(){
    stack<int> st;
    st.push(1);  //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top(); // 5 

    // in stack st[2] is invalid , u cannot access elements with their index
    // only three functions top (just prints the element dosent remove from stack), push , pop are allowed
    
     st.pop(); // st looks like {3,3,2,1}

     cout << st.top(); // 3

     cout << st.size();  // 4

      cout << st.empty();  // False

      stack<int> st1,st2; 
      st1.swap(st2);     // swaps the stack 

      // evrything in stack happens in contant time ,O(1)
}

CONTAINER 4 :  QUEUE (FIFO)

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5  // 4+5

   // {1,2,9}
    cout<< q.back(); // prints 9

    cout << q.front(); // prints 1

    q.pop(); //{2,9}

    cout << q.front(); // prints 2

    // size , swap , empty same as stack

// constant time : O(1)

}

CONTAINER 5 :  PRIORITY QUEUE 
// largest string,char,integer will stay at top
// data is not stored in linear manner , tree structure is maintained
void explainPQ(){
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); // 10

    pq.pop(); //{8,5,2}

     cout << pq.top(); // 8
    
   // minimum heap
   // stores min element at top
   priority_queue<int, vector<int>, greater<int>> pq; 
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}
     
     cout << pq.top(); // 10


    // size , swap , empty same as stack

// time :  top :  O(1)
//          pop: O(1)
//          push: log n

}


CONTAINER 6 : SET 

// evrything is sorted
// all elements are unique
// tree is maintained to store elements
//everything happens in log(n) time

void explainSet(){
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3); // {1,2,3,4}


    //{1,2,3,4,5}
    auto it = st.find(3);  // returns an iterator pointing to 3
    auto it2 = st.find(6);  // iterater points at end
    st.erase(5);  // erases 5 and maintains the sorted order takes logarithmic time 
    int cnt = st.count(1);  // 1 if element is there , else 0


    auto it = st.find(3)
    st.erase(it);

   //{1,2,3,4,5}
    auto it1 = st.find(2)
    auto it2 = st.find(4)
    st.erase(it1,it2);  // {1,4,5}  [first,last) doset erase 4 , runs from 2 - n-1

    auto it = st.lowerBound(2);
    auto it2 = st.lowerBound(3);

    // lower bound : returns the first occurance of element if its occurs else returns iterator to next elemnt
    a[] = {1,4,5,6,9,9}
    int ind = lower_bound(a,a+n,4)-a; // returns index 1
    int ind = lower_bound(a,a+n,7)-a; // returns index 4 (next greater index after 7 i.e 9)
    int ind = lower_bound(a,a+n,10)-a; // returns 6 

    //for vector
    int ind = lower_bound(a.begin(), a.end(), a) - a.begin();

   // upper bound : never returns iterator pointing to that element , always returns an iterator pointing to next greater element
    a[] = {1,4,5,6,9,9}
    int ind = upper_bound(a,a+n,4)-a; // returns index 2 (next to index of 4)
    int ind = upper_bound(a,a+n,7)-a; // returns index 4 (next greater index after 7 i.e 9)
    int ind = upper_bound(a,a+n,10)-a; // returns 6

    //for vector
    int ind = upper_bound(a.begin(), a.end(), a) - a.begin();
}

CONTAINER 7 : MULTI_SET 

// obeys sorted but not unique, can store multiple occurances of an element

void explainMultiSet(){

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); //3

    ms.erase(ms.find(1)); // only single 1 is erased
    ms.erase(ms.find(1), ms.find(1)+ 2);  // erase 2  1's

    // rest all functions are same as set
}


CONTAINER 8 : UNORDERED SET 

void explainUset(){
    unordered set<int> st;

    // same as set except it does not have sorted elements but has unique elements
    // random order
    // O(1) time complexity
    // lower and upper bound does not work
    // worst case : O(n) time complexity
}

CONTAINER 9 : MAP

// stores unique keys in sorted order

void explainMap(){

    map<int,int> mpp;
    map<int, pair<int,int>> mpp;
    map<pair<int,int>, int> mpp;

    mpp[1] = 2; //{1,2} on key 1 store 2
    mpp.emplace({3,1}); // {3,1} on key 3 store 2
    mpp.insert({2,4});
    mpp[{2,3}] = 10;
    {
        {1,2}
        {2,4}
        {3,1}
        {{2,3},10}
    }

   
    // for each element in mpp
    
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    // 1 2
    // 2 4
    // 3 4

    cout<<mpp[1];  // 2
    cout<<mpp[5]; // 0 (dosent exist)

    auto it = mpp.find(3); {3,1} // fids the pair with value 3
    cout << *(it).second // 1 , gives the element 1

    auto it = mpp.find(5); // not found so points at end

    // syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(2);

    // erase,swap,size,empty same as above


}

CONTAINER 10 : MULTI MAP


void explainMultimap(){
// same as map , only it can store duplicate keys in sorted order
// omly mpp[key] cannot be used here
}


CONTAINER 11 : unordered MAP

void explainUnorderedMap(){
    //has unique keys but wont be sorted
    // map: O(log n) , unordered map : O(1) , WORST CASE: O(N)
    // same as set and unordered set difference
}