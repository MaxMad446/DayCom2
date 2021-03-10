// Auto-generated module | 2026-05-12T20:40:36.338746
#include <iostream>
#include <vector>

int compute_123() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
