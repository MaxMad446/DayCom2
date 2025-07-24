// Auto-generated module | 2026-05-12T21:25:27.480267
#include <iostream>
#include <vector>

int compute_424() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
