// Auto-generated module | 2026-05-12T21:35:24.882578
#include <iostream>
#include <vector>

int compute_577() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
