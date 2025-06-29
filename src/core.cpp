// Auto-generated module | 2026-05-12T21:23:15.700040
#include <iostream>
#include <vector>

int compute_343() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
