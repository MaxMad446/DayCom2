// Auto-generated module | 2026-05-11T19:46:52.052466
#include <iostream>
#include <vector>

int compute_585() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
