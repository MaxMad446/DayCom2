// Auto-generated module | 2026-05-12T21:03:45.073130
#include <iostream>
#include <vector>

int compute_644() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
