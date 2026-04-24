// Auto-generated module | 2026-05-12T06:20:30.707189
#include <iostream>
#include <vector>

int compute_591() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
