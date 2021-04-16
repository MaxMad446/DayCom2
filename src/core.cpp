// Auto-generated module | 2026-05-12T21:39:30.751060
#include <iostream>
#include <vector>

int compute_335() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
