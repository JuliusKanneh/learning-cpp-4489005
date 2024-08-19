// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>

int main(){
    auto fname = "Julius";
    auto a = 1;
    auto b = 1.1;
    auto c = 1.1f;
    auto d = false;
    auto e = 'J';
    auto f = 0x24;
    auto g = 023;
    auto h = 123333333332;

    std::cout << typeid(fname).name() << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
    std::cout << typeid(g).name() << std::endl;
    std::cout << typeid(h).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
