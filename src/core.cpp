// Auto-generated module | 2026-05-12T04:13:22.625442
#include <iostream>
#include <vector>

int compute_216() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
