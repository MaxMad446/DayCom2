// Auto-generated module | 2026-05-11T22:43:28.206644
#include <iostream>
#include <vector>

int compute_102() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
