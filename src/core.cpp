// Auto-generated module | 2026-05-12T21:18:00.822560
#include <iostream>
#include <vector>

int compute_562() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
