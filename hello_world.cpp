#include <iostream>

int main() {
    std::string name; // string to store name
    std::cout << "Enter your name: "; // ask user for name 
    std::cin >> name; // get user input
    std::cout << "Hello world from " << name << std::endl; // print hello world
    return 0; // end
}
