// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "What's your name: " << std::flush;
    std::cin >> name;
    std::cout << "Your name is is " << name << ".";

    std::cout << std::endl << std::endl;
    return (0);
}
