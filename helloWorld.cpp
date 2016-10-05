// includes to be included
#include <iostream> // input and ourput. 
#include <cstdlib> // for random number for basics.
#include <ctime> // to get th system time. 

// by using name space std we do not have to write std::cout or std::cin. 
using namespace std;

// The standard Hello world fucntion. 

void helloWorld(){
    cout<<"Hello world"<<endl;
}

// Rnadom function. 
// The random fucntion is called to generate a random number. 
// To call the random number we need to #include <cstdlib>. 
// The range of the random number is given by (1 + (rand() % 'the range number'))
// srand helps the rand() function to get true random number by providing te seed. 
void print_random_numbers(int x){
    srand(time(0));
    for(int i = 1;i<=x;i++){
        cout<<(1+(rand()%100))<<endl;
    }

}


// Function with multiple parameters. 
// Function with default parameters values. 
// So if the function is called but the values for a,b,c are not 
// given the the fucntion uses default values. 
void summDefault(int a = 10, int b = 20, int c = 30){
    cout<<a*b*c;
}

// Function Overloading. 
// When a fucntion is defined twice but the parameters have 
// different data time then it is called fucntion Overloading
// the input parameter data has to be different the return type different 
// and the same input type will give an error
void funOverloading(int a){
    cout << a << endl;
}
void funOverloading(float a){
    cout << a << endl;
}

// Function Recursion
// When a function calls itself
int factorial(int a){
    if (a == 1){
        return 1;
    }
    else{
        cout<<a<<endl;
        return a * factorial(a-1);
    }
}

// address and the pointers
// & - passing the address
// * - pointer
void pointerFunction(int *x){
    *x=100;
}

// The main fucntion which has the be at the end of the code,
// or atleast after decalring all the functions. 
int main(){
   
    // helloWorld();
    // print_random_numbers(10);
    // summDefault(1);
    // funOverloading(10.2333);
    // funOverloading(10.23);
    // cout << factorial(5) <<endl;
    // int var = 20;
    // pointerFunction(&var);
    // cout<<var;

    return 0;
}
