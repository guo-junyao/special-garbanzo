#include <iostream>

int main() {
    char c;
    int space_count = 0;
    while (std::cin.get(c)) {
        if (c == ' ') {
            space_count++;
        } else if (c == '\n') {
            break;
        }
    }
    std::cout << space_count << std::endl;

    return 0;
}