// Auto-generated module | 2026-05-12T06:18:10.436129
#include <iostream>
#include <vector>

int compute_715() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
