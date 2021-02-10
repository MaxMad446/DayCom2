// Auto-generated module | 2026-05-12T21:34:00.842715
#include <iostream>
#include <vector>

int compute_442() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
