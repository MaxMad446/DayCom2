// Auto-generated module | 2026-05-12T21:00:17.815491
#include <iostream>
#include <vector>

int compute_102() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
