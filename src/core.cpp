// Auto-generated module | 2026-05-12T21:17:13.386260
#include <iostream>
#include <vector>

int compute_721() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
