#include <iostream> 
#include <cmath>    // Added for sqrt() function
using namespace std; 

// Function prototypes 
int add(int a, int b); 
int subtract(int a, int b); 
int multiply(int a, int b); 
int divide(int a, int b);
int square(int a);         // Added square function prototype
double squareRoot(int a);  // Added square root function prototype

int main() { 
    int num1, num2; 
    char operation; 

    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 

    cout << "Choose operation (+, -, *, /, ^,  r): "; 
    cin >> operation; 

    switch (operation) { 
        case '+': 
            cout << "Result: " << add(num1, num2) << endl; 
            break; 
        case '-': 
            cout << "Result: " << subtract(num1, num2) << endl; 
            break; 
        case '*': 
            cout << "Result: " << multiply(num1, num2) << endl; 
            break; 
        case '/': 
            cout << "Result: " << divide(num1, num2) << endl; 
            break;
        case '^': 
            cout << "Square of " << num1 << ": " << square(num1) << endl;
            break;
        case 'r': 
            cout << "Square root of " << num1 << ": " << squareRoot(num1) << endl;
            break;
        default: 
            cout << "Invalid operation!" << endl; 
    } 

    return 0; 
} 

// Function definitions 
int add(int a, int b) { 
    return a + b; 
} 