// Auto-generated module | 2026-05-13T22:07:23.394579
#include <iostream>
#include <vector>

int compute_592() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
