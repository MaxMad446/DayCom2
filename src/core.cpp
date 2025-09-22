// Auto-generated module | 2026-05-12T04:27:49.351275
#include <iostream>
#include <vector>

int compute_307() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
