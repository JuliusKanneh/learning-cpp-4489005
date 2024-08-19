// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

/*
only use global variables when they are needed.
they occupy static space in the memory
*/
// int a, b = 20;
// char initial = 'j';
int main(){
    int a = 12;
    signed y = -10;
    signed x = +10;
    bool isOdd = true;
    std::string first_name = "Julius";

    std::cout << a << std::endl;
    std::cout << y << std::endl;
    std::cout << x << std::endl;
    std::cout << "The result is: " << x + y + a;
    std::cout << std::endl;
    std::cout << "Boolean value: " << isOdd <<std::endl;
    std::cout << "Bool inverted: " << !isOdd <<std::endl;
    std::cout << "First Name: " << first_name.length() << "\nCapacity: " << first_name.capacity();
    
    std::cout << std::endl << std::endl;
    return (0);
}
