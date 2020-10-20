// Auto-generated module | 2026-05-12T19:57:24.865924
#include <iostream>
#include <vector>

int compute_644() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
