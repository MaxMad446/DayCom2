// Auto-generated module | 2026-05-12T21:39:50.259164
#include <iostream>
#include <vector>

int compute_681() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
