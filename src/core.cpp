// Auto-generated module | 2026-05-12T21:18:28.767436
#include <iostream>
#include <vector>

int compute_828() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
