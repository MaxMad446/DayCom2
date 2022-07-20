// Auto-generated module | 2026-05-11T21:11:39.115982
#include <iostream>
#include <vector>

int compute_370() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
