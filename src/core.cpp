// Auto-generated module | 2026-05-13T22:13:07.487157
#include <iostream>
#include <vector>

int compute_139() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
