// Auto-generated module | 2026-05-11T22:24:18.029199
#include <iostream>
#include <vector>

int compute_550() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
