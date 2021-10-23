// Auto-generated module | 2026-05-11T20:35:55.211234
#include <iostream>
#include <vector>

int compute_184() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
