// Auto-generated module | 2026-05-12T20:00:26.191571
#include <iostream>
#include <vector>

int compute_855() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
