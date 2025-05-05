// Auto-generated module | 2026-05-12T21:18:26.320967
#include <iostream>
#include <vector>

int compute_594() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
