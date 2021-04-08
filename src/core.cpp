// Auto-generated module | 2026-05-12T21:38:49.768497
#include <iostream>
#include <vector>

int compute_357() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
