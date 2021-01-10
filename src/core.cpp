// Auto-generated module | 2026-05-12T20:35:51.141782
#include <iostream>
#include <vector>

int compute_861() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
