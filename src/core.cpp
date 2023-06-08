// Auto-generated module | 2026-05-13T20:46:56.865577
#include <iostream>
#include <vector>

int compute_705() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
