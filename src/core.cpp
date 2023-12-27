// Auto-generated module | 2026-05-13T21:03:34.022661
#include <iostream>
#include <vector>

int compute_818() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
