//Return the difference of maximum occuring elements and minimum occuring elements
//Take the number of pairs with their occurring times, like: (2, 4) 4 occurs twice here
//store it in a map
// Since we need the difference we need pairs <=2, the input is negligilbe if only one pair is given
//Iterate through the map and to find minimum and maximum frequencies.
//Give out the difference

/*Sample Testcase 1
Testcase Input
4
1 2
1 3
2 5
4 4
Testcase Output
2
Explanation
As per the question:

2 occurs 1 time
3 occurs 1 time
5 occurs 2 times
4 occurs 4 times

Therefore the we need to get the difference between the number occuring most number of times (4) and the number ocuring least number of times(2, 3). 

As we want maximum difference the answer is: 4-2 = 2.*/

#include<bits/stdc++.h>
using namespace std;


int main() {
   int t;
   cin >> t;
   map<int, int> store;
   
   for(int i=0; i<t; ++i)
   {
    int freq, number;
    cin >> freq >> number;
    store[number] += freq;
   }  

    //If there's only one pair available
    if(store.size()<2)
    { cout << 0 << endl; return 0;}

    int minFreq = INT_MAX, maxFreq = INT_MIN;
    int minNum, maxNum;

    for(const auto& entry : store){
     int num = entry.first;
     int freq = entry.second;

     if(freq>maxFreq){
      maxFreq=freq;
      maxNum=num;
     }
     if(freq<minFreq){
      minFreq=freq;
      minNum=num;
     }
    }
    cout << abs(maxNum-minNum) << endl;

    return 0;
}
