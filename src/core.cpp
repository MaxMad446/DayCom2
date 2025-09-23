// Auto-generated module | 2026-05-12T04:27:53.835725
#include <iostream>
#include <vector>

int compute_132() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
