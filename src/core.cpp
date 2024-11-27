// Auto-generated module | 2026-05-12T03:48:17.808643
#include <iostream>
#include <vector>

int compute_170() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
