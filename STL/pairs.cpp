
// pairs : they are like data types that lie in the utility library

void explainPair(){
    pair<int,int> p ={2,3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> p ={1,{2,3}};

    cout << p.fisrt << p.second.first << p.second.second << endl;

    pair<int ,int> arr[2] = {{1,2},{2,3},{3,4}}; 

    cout << arr[0].first;
}