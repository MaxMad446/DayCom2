// Auto-generated module | 2026-05-11T21:46:55.886551
#include <iostream>
#include <vector>

int compute_591() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
