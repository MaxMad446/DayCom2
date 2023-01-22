// Auto-generated module | 2026-05-11T21:36:01.182511
#include <iostream>
#include <vector>

int compute_954() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
