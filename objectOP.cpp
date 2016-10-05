#include <iostream>
#include <string>
using namespace std;

// Object Oriented Programming
// 
// OBJECTS are indepedent units and each has its own identity 
// An object can contain other objects but still they are 
// different object
// 
// An objects has cahracteristics like a real work object, for 
// instance, a mug is an object and it has characteristics like 
// red color, big size etc. the characteristics of the objects
// are called the ATTRIBUTES
// 
// In real world each object behaves in different ways, The car 
// moves, the phone rings
// Hence each object is BEHAVIOR specific 
// 
// An Object has three main asoects
// Identity
// Attributes
// Behavior
//
// CLASSES
// Objects are created using classes, they are the focal point 
// of object orientd programming
// A class is like a blueprint of a objects, multiple objects can 
// be created using the same class. 
// Each class has a name, and describes attributes and behavior
// METHODS, another term for class, it basically is a fucntion  
// which belongs to a class 
// 
// INSTANTIATION
// Each object is called an instance of a class, the process of 
// creating an object is called instantiation. 
// 
// ABSTRACTION
// Abstraction is a concept of providing only essential 
// information to outside world
//  
// ENCAPSULATION
// Encapsulation is to surrounding an entity, it is to keep things
// inside as well as to protect it. 
// Also knwon as BlackBoxing
// ACCESS SPECIFIERS
// They are used to set access leveles to perticular members of 
// the class. 
// 
// CONSTRUCTORS
// Special member fucntion of class, they are executed whenever
// an object is created. It must have identical name as class. 
// It has no return type, not even a void.

// Putting it all together

class myClass{
    public:
    myClass(){
        setName("Bhaumik");
        cout<<"Object created"<<endl;
        cout<<"The contructor has worked"<<endl;
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};

int main(){
    myClass myObj;
    cout << myObj.getName() << endl;
    myObj.setName("Jenisha");
    cout << myObj.getName() << endl;
    return 0;
}