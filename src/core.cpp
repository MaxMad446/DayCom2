// Auto-generated module | 2026-05-11T22:44:23.588941
#include <iostream>
#include <vector>

int compute_190() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
