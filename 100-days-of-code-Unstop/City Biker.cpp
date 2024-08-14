//This code Gives out the highest altitude gain

/*Once upon a time, a city biker embarked on an exciting road trip. This journey was laid out across a sequence of n+1 points, each with varying altitudes. 
The biker's adventure commenced at point 0, where the altitude was a humble 0 meters above sea level. During his expedition, he encountered different terrains.
Each segment was represented by an integer array called gain of length n, where gain[i] denoted the net gain in altitude between points i and i+1.
The biker's goal was to find the highest altitude he reached during his journey. 
This altitude was determined by the net gain in altitude at each point along the way. */


/* The time complexity of this code is O(n) because we have two loops that iterate through the input array of size n. 
The first loop reads the input values and the second loop calculates the highest altitude. 
The space complexity is O(n) because we are using a vector of size n to store the gain values. 
Additionally, we have a few integer variables that take up constant space. 

Overall, the time complexity is O(n) and the space complexity is O(n) for this code. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> gain(n);

    for(int i=0; i<=n; ++i )
    { cin >> gain[i]; }
  
    int altitude = 0;
    int highestAltitude=0;

    for(int i=0; i<n; ++i)
    {
        altitude+=gain[i];
        if(altitude>highestAltitude)
        {
            highestAltitude=altitude;
        }
    }
    cout << highestAltitude << endl;
    return 0;
}
