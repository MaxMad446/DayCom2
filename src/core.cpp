// Auto-generated module | 2026-05-13T21:03:29.254727
#include <iostream>
#include <vector>

int compute_822() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
