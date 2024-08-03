#include <vector>
#include <algorithm> //Needed for find

int main() {
    // Creating a vector
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};
    
    // Adding a new element at the end using push_back
    fruits.push_back("date");
    
    // Inserting an element at a specific position using insert
    fruits.insert(fruits.begin() + 1, "bilberry");
    
    // Finding position of 'banana' and removing it using erase
    auto pos = std::find(fruits.begin(), fruits.end(), "banana");
    if (pos != fruits.end())
    {
        fruits.erase(pos);   
    }
    
    // Accessing elements using indexing
    std::string first_fruit = fruits[0]; // "apple"
    std::string last_fruit = fruits[fruits.size() - 1]; // "date"

    // Now, fruits equals {"apple", "bilberry", "cherry", "date"}
    return 0;
}
