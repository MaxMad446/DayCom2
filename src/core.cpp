// Auto-generated module | 2026-05-11T20:46:45.114946
#include <iostream>
#include <vector>

int compute_951() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
