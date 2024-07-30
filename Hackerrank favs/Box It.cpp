#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box{
    private:
    int l, b, h;
    
    public:
    Box(){
        l=0;
        b=0; 
        h=0;
    }
    Box(int a, int br, int c):l(a), b(br), h(c) {}
    
    Box(const Box& obj){
        l=obj.l;
        b=obj.b;
        h=obj.h;
    }
    
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return static_cast<long long>(l)*b*h;
    }
    bool operator<(const Box& other){
        if(l <other.l) return true;
        if(l==other.l && b<other.b) return true;
        if(l==other.l && b==other.b && h<other.h) return true;
        return false;
    }
    friend ostream& operator <<(ostream&out, const Box& B){
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
};
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
