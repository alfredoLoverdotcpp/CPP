#include<bits/stdc++.h>
using namespace std;

double AreasofTheChoices(int ch, vector<double> arr)
{
    double result=0.0;
    switch(ch)
    {
        case 1:{ //area of circle
          double r = arr[0];
          result = M_PI*r*r;
          break;  
        }
        case 2: { //area of rectangle
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
    while (true){
    int choice;
    vector <double> vect;
    
    cout << "Enter number to find the areas, 1 to find the area of circle and 2 to find the area of rectangle: ";
    cin >> choice;
    while (choice != 1 && choice != 2) {
        cout << "Invalid choice! Please enter 1 for circle or 2 for rectangle: ";
        cin >> choice;
    }
    
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
        vect.push_back(values);
    }
    double area = AreasofTheChoices(choice, vect);
    cout << "Area: " << area << endl;
  }
  else
  cout<< "Invalid choice!";
    }
  return 0;
}
