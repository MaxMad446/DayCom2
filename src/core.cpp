// Auto-generated module | 2026-05-11T21:37:10.779662
#include <iostream>
#include <vector>

int compute_591() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
