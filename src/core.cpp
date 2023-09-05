// Auto-generated module | 2026-05-13T20:54:05.874577
#include <iostream>
#include <vector>

int compute_591() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
