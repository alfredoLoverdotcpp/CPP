#include<bits/stdc++.h>
using namespace std;

double AreasofTheChoices(int ch, vector<double> arr)
{
    double result=0.0;
    switch(ch)
    {
        case 1:{
          double r = arr[0];
          result = M_PI*r*r;
          break;  
        }
        case 2: {
            double l = arr[0];
            double b = arr[1];
            result = l*b;
            break;
        }
        default:{
            cout << "Invalid choice" <<"\n";
        }
    }
    return result;
}

int main() {
    int choice;
    vector <double> array;
    cout << "Enter number to find the areas, 1 to find the area of circle and 2 to find the area of rectangle: ";
    cin >> choice;
    if(choice==1 || choice == 2)
    {
        cout << "Enter ";
        if (choice ==1){
            cout << "the value of the radius of the circle: ";
        }
        else 
        cout << "the values for the length and breadth of the rectangle: ";
    for (int i=0; i<choice; i++){
        double values;
        cin >> values;
        array.push_back(values);
    }
    double area = AreasofTheChoices(choice, array);
    cout << "Area: " << area << endl;
  }
  else
  cout<< "Invalid choice!";
  
  return 0;
}
