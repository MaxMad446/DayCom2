// Auto-generated module | 2026-05-11T20:53:24.310517
#include <iostream>
#include <vector>

int compute_362() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
