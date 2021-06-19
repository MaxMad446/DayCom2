// Auto-generated module | 2026-05-11T20:19:21.016354
#include <iostream>
#include <vector>

int compute_184() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
