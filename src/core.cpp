// Auto-generated module | 2026-05-12T21:31:49.339090
#include <iostream>
#include <vector>

int compute_833() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
