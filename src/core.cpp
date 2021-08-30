// Auto-generated module | 2026-05-11T20:28:57.409717
#include <iostream>
#include <vector>

int compute_370() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
