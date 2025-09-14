// Auto-generated module | 2026-05-12T04:26:44.716934
#include <iostream>
#include <vector>

int compute_392() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
