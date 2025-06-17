#include <iostream>

int main() {
    char buffer1[101];
    char buffer2[101];
    char c;
    int index1 = 0;
    int index2 = 0;
    bool space_found = false;
    while (std::cin.get(c) && c != '\n') {
        if (!space_found) {
            if (c == ' ') {
                space_found = true;
                buffer1[index1] = '\0';
            } else {
                if (index1 < 100) {
                    buffer1[index1++] = c;
                }
            }
        } else {
            if (index2 < 100) {
                buffer2[index2++] = c;
            }
        }
    }
    buffer2[index2] = '\0';
    std::cout << buffer1 << std::endl;
    std::cout << buffer2 << std::endl;

    return 0;
}