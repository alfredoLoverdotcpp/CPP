#include<bits/stdc++.h>
using namespace std;
#include<chrono>
#include<thread>
using namespace std::chrono;
/* <chrono> provides facilities to measure time intervals and time points, as well as clocks to measure the time since a specific epoch. It's commonly used for time-related operations, such as measuring the execution time of a function or setting timeouts.

<thread> provides classes and functions for managing threads in a multi-threaded environment. It allows you to create, control, and synchronize threads, as well as handle thread-related operations such as sleeping or waiting for threads to finish.

In the given context, <chrono> is used to measure the time elapsed between user input attempts, and <thread> might be used indirectly through <chrono> to provide the timing functionality.*/

string compareIfElse(int a, int b) {
    if (a > b) 
	{
        return "greater";
    } 
	else if (a < b) 
	{
        return "smaller";
    } 
	else 
	{
        return "equal";
    }
}

int main() {
    while (true){
    int num1, num2;
    /*In C++, auto is a keyword used for automatic type inference. When you use auto to declare a variable, the compiler deduces the type of that variable from the initializer expression on the right-hand side. This means you don't need to explicitly specify the type of the variable; the compiler will determine it for you. */
    auto start = steady_clock::now();
    cin >> num1 >> num2;
    /*steady_clock: This is a clock provided by the <chrono> header in C++. It represents a monotonic clock, which means it always moves forward at a constant rate and cannot be adjusted or synchronized with any external time source. It's commonly used for measuring time intervals and performance timings.*/
    auto end = steady_clock::now();
    auto duration = duration_cast<seconds>(end-start).count();
    if(duration>=5){
        cout<<"Sorry, you didn't input anything in the given time, exiting program ...";
    }
    else {
    string comparison = compareIfElse(num1, num2);
    cout << comparison << endl;
    }
    }
    return 0;
}
