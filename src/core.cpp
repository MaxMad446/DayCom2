// Auto-generated module | 2026-05-12T03:51:43.795613
#include <iostream>
#include <vector>

int compute_322() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
