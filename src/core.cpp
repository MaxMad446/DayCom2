// Auto-generated module | 2026-05-12T21:20:24.523079
#include <iostream>
#include <vector>

int compute_550() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
