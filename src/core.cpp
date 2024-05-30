// Auto-generated module | 2026-05-14T18:29:11.589807
#include <iostream>
#include <vector>

int compute_550() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
