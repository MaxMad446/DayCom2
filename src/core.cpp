// Auto-generated module | 2026-05-11T21:31:40.738574
#include <iostream>
#include <vector>

int compute_468() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
