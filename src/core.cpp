// Auto-generated module | 2026-05-12T20:02:33.064247
#include <iostream>
#include <vector>

int compute_123() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
