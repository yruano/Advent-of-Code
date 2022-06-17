#include <iostream>
#include <string>

int main() {
    std::string str = "dddd";
    for (int i = 0; i < 5; i++) {
        str += "1";
    }
    std::cout << str;
}