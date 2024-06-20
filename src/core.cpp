// Auto-generated module | 2026-05-11T22:43:03.597592
#include <iostream>
#include <vector>

int compute_644() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
