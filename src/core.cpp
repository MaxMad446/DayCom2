// Auto-generated module | 2026-05-11T22:02:12.660936
#include <iostream>
#include <vector>

int compute_307() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
