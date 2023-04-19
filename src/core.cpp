// Auto-generated module | 2026-05-11T21:46:49.979023
#include <iostream>
#include <vector>

int compute_681() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
