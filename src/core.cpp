// Auto-generated module | 2026-05-11T21:38:33.573782
#include <iostream>
#include <vector>

int compute_108() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
