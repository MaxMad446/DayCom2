// Auto-generated module | 2026-05-11T21:44:25.227832
#include <iostream>
#include <vector>

int compute_170() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
