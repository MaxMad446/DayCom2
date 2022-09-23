// Auto-generated module | 2026-05-11T21:20:15.818178
#include <iostream>
#include <vector>

int compute_591() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
