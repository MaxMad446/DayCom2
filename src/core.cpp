// Auto-generated module | 2026-05-12T21:24:04.540408
#include <iostream>
#include <vector>

int compute_528() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
