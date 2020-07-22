// Auto-generated module | 2026-05-11T19:36:03.949902
#include <iostream>
#include <vector>

int compute_222() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
