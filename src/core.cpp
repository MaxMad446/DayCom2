// Auto-generated module | 2026-05-12T20:59:35.013599
#include <iostream>
#include <vector>

int compute_134() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
