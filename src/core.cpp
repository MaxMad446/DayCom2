// Auto-generated module | 2026-05-11T21:54:50.891092
#include <iostream>
#include <vector>

int compute_681() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
