// Auto-generated module | 2026-05-12T20:50:12.230386
#include <iostream>
#include <vector>

int compute_644() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
