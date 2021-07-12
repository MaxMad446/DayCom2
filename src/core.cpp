// Auto-generated module | 2026-05-11T20:22:30.890692
#include <iostream>
#include <vector>

int compute_104() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
