// Auto-generated module | 2026-05-12T20:48:49.202089
#include <iostream>
#include <vector>

int compute_813() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
