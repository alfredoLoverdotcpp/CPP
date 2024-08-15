/* Sample Testcase 0
Testcase Input
6
d
b
c
b
c
a
2
Testcase Output
a
Explanation
The only strings in arr that are distinct are "d" and "a." The letter "d" comes first, making it the first separate string.

Because "a" appears second, it is the second distinct string. "a" is returned since k == 2. */

#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

     int n, k;
     cin >> n;

     vector<string> arr(n);
     unordered_map<string, int> myMap;
     vector<string> uniqueStrings;

     for(int i=0; i<n; i++){
         cin >> arr[i];
         myMap[arr[i]]++;
     }
    
     for(auto str: arr)
     {
         if(myMap[str]==1)
         {
             uniqueStrings.push_back(str);
         }
     }
     
     cin >> k;
     //kth unique element in the vector, eg: 2nd or 3rd .. unique element in the vector
     
     if(uniqueStrings.size()<k){
         cout << "" << endl;
     }
     else{
         cout << uniqueStrings[k-1] <<endl;
     }

     return 0;

    //  int n, k;
    //  cin >> n;
    //  vector<string> arr(n);
    //  map<string, int> myMap;
    //  int count=0;

    //  for(int i=0; i<n; ++i)
    //  {
    //      cin >> arr[i];
    //      myMap[arr[i]]++;
    //  }
    //  cin >> k;
    //  for(int i=0; i<n; ++i)
    //  {
    //      if(myMap[arr[i]]>1) continue;
    //      else count++;

    //      if(count == k)
    //      {
    //          cout << arr[i] << endl;
    //      }
    //  }
    //  if(count<k)
    //  cout << "" << endl;

}
