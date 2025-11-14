// Auto-generated module | 2026-05-12T04:34:47.018931
#include <iostream>
#include <vector>

int compute_261() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
