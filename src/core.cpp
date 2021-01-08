// Auto-generated module | 2026-05-12T21:31:26.128695
#include <iostream>
#include <vector>

int compute_999() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
