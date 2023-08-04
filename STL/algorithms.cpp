1. SORTING

void explainSort(){

// for arrays 
sort(a,a+n);  // ascending order

// for vectors
sort(v.begin(),v.end());

// suppose we have to sort a particular part of the array
// {2,3,5,8} sort only 5 and 8
sort(a+2,a+4);


//{1,3,5,2} sort in descending order
sort(a,a+n,greater<int>); // {5,3,2,1}

// sorting according to your own way 

pair<int,int> a[] = {{1,2},{2,1},{4,1}}

// for eg
// sort it according to second element
// if sec ele is same , then sort it according to first ele in descending

{{2,1},{4,1},{1,2}}  // sort 2nd ele
{{4,1},{2,1},{1,2}} // sort 1st ele

// for above types we use the algo below

sort(a,a+n,comp)   // comp: self written comapator

comp(pair<int,int> p1, pair<int,int> p2){
  if(p1.second < p2.second) return true;
  if(p1.second > p2.second) return false;
  // they are same
  if(p1.first < p2.first) return false;
  return true;
}


2. builtin_popcount();

// returns how many 1's are there or how many set bits are there

int num = 7;  // 0000...111
int cnt = _builtin_popcount(); // 3

long long num = 165786578687;
int cnt =  _builtin_popcountll();


3. print all permutation
string s = "123";
sort(s.begin(), s.end());

do{
    cout << s << endl;

} while(nex_permutation(s.begin(), s.end()));
}

// 123
// 132
// 321
// 312
// 231
// 213


4. find max ele in array
int maxi = *max_element(a,a+n);// * gives element




