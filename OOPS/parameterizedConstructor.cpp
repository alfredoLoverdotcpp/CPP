// The time complexity of the given code is O(1) because the operations performed in the constructors and member function are constant time operations. 
// The space complexity is also O(1) because the amount of memory used by the code does not change with the input size. 
// In the constructors, the initialization of data members and base class constructor call are constant time operations. 
// Overall, the code has a constant time and space complexity due to the fixed number of operations and memory usage regardless of the input size.

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
public:
    //Two public Data Members
    int noOfGear;
    string color;

    // Parameterized constructor
    Car(int noOfGear, string color) {
        this->noOfGear = noOfGear;
        this->color = color;
    }//initializes the noOfGear and color attributes when a Car object is created.
    //This constructor is called when you create a Car object with specific values.


    //the member function
    void printCarInfo()
    {
        cout << "noOfGear: " <<this-> noOfGear << endl;
        cout << "color: " << this->color << endl;
    }
};

//Inheritance
class RaceCar: public Car {
public:
    int maxSpeed;

    // Parameterized constructor for RaceCar
    RaceCar(int noOfGear, string color, int maxSpeed) : Car(noOfGear, color) {
        this->maxSpeed = maxSpeed;
    }
    //calls the Car constructor to initialize the noOfGear and color attributes and then initializes the maxSpeed attribute specific to RaceCar.
    //This ensures that the Car part of RaceCar is properly initialized using the Car constructor.

    void printInfo() {
        printCarInfo();
        cout << "maxSpeed: " << this->maxSpeed << endl;
    }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}
