// Auto-generated module | 2026-05-11T21:43:55.614148
#include <iostream>
#include <vector>

int compute_104() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
