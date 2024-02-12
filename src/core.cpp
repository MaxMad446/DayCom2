// Auto-generated module | 2026-05-11T22:26:13.987349
#include <iostream>
#include <vector>

int compute_640() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
