// Auto-generated module | 2026-05-13T20:28:12.615556
#include <iostream>
#include <vector>

int compute_104() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
