// Auto-generated module | 2026-05-12T20:54:30.961340
#include <iostream>
#include <vector>

int compute_125() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
