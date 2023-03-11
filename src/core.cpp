// Auto-generated module | 2026-05-13T20:32:47.870732
#include <iostream>
#include <vector>

int compute_472() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
