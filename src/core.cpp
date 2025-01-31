// Auto-generated module | 2026-05-12T21:10:41.413245
#include <iostream>
#include <vector>

int compute_133() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
