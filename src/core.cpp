// Auto-generated module | 2026-05-12T21:00:24.238066
#include <iostream>
#include <vector>

int compute_681() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
