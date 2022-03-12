// Auto-generated module | 2026-05-11T20:54:18.080527
#include <iostream>
#include <vector>

int compute_954() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
