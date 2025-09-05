// Auto-generated module | 2026-05-12T21:29:21.417018
#include <iostream>
#include <vector>

int compute_612() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
