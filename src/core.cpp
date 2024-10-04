// Auto-generated module | 2026-05-12T03:41:22.965274
#include <iostream>
#include <vector>

int compute_990() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
