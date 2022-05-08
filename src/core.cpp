// Auto-generated module | 2026-05-11T21:01:47.302986
#include <iostream>
#include <vector>

int compute_889() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
