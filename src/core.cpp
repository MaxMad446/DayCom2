// Auto-generated module | 2026-05-11T22:36:36.357813
#include <iostream>
#include <vector>

int compute_612() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
