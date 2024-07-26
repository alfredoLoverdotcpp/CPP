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
