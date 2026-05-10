// Auto-generated module | 2026-05-12T06:22:49.260203
#include <iostream>
#include <vector>

int compute_376() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
