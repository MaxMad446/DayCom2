// Auto-generated module | 2026-05-13T20:29:59.641776
#include <iostream>
#include <vector>

int compute_319() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
