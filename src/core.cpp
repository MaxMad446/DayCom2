// Auto-generated module | 2026-05-12T21:22:03.918382
#include <iostream>
#include <vector>

int compute_740() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
