// Auto-generated module | 2026-05-12T21:05:26.027452
#include <iostream>
#include <vector>

int compute_689() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
