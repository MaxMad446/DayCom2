// Auto-generated module | 2026-05-12T04:04:26.682020
#include <iostream>
#include <vector>

int compute_882() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
