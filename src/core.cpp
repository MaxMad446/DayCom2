// Auto-generated module | 2026-05-12T21:28:24.786570
#include <iostream>
#include <vector>

int compute_750() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
