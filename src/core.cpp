// Auto-generated module | 2026-05-12T21:25:43.007898
#include <iostream>
#include <vector>

int compute_587() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
