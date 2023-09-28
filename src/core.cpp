// Auto-generated module | 2026-05-13T20:56:03.668126
#include <iostream>
#include <vector>

int compute_583() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
