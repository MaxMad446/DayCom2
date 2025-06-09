// Auto-generated module | 2026-05-12T04:13:39.408064
#include <iostream>
#include <vector>

int compute_482() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
