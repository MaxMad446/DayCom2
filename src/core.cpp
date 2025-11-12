// Auto-generated module | 2026-05-12T04:34:31.198854
#include <iostream>
#include <vector>

int compute_400() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
