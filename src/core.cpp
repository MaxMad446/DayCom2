// Auto-generated module | 2026-05-11T19:43:55.870547
#include <iostream>
#include <vector>

int compute_498() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
