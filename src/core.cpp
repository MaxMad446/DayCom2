// Auto-generated module | 2026-05-11T21:09:57.475476
#include <iostream>
#include <vector>

int compute_110() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
