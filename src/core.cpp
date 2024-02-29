// Auto-generated module | 2026-05-11T22:28:33.982496
#include <iostream>
#include <vector>

int compute_587() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
