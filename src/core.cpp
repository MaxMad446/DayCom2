// Auto-generated module | 2026-05-11T20:41:30.823632
#include <iostream>
#include <vector>

int compute_913() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
