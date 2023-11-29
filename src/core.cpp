// Auto-generated module | 2026-05-11T22:16:21.474822
#include <iostream>
#include <vector>

int compute_868() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
