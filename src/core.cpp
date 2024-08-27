// Auto-generated module | 2026-05-11T22:51:49.690185
#include <iostream>
#include <vector>

int compute_777() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
