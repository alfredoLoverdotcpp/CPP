//Finding the unique number

//Approach 1: storing in maps counting the frequencies
int lonelyinteger(vector<int> a) {
    map<int, int> count;
    int n = a.size();
    for(int i=0; i<n; ++i){
        count[a[i]]++;
    }
    for(auto it: count){
        if(it.second==1){
           return it.first;
        }
    }
    return 0;

}

//Approach 2: more efficient way to solve this (XOR)
int lonelyinteger(vector<int> a) {
    int unique=0;
    for(int num: a){
        unique^=num;
    }
    return unique;

}
