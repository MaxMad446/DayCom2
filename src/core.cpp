// Auto-generated module | 2026-05-12T20:49:31.461547
#include <iostream>
#include <vector>

int compute_522() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
