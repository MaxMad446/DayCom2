// Auto-generated module | 2026-05-11T20:01:03.048230
#include <iostream>
#include <vector>

int compute_951() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
