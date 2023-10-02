// Auto-generated module | 2026-05-11T22:08:48.983845
#include <iostream>
#include <vector>

int compute_758() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
