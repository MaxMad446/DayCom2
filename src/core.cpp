// Auto-generated module | 2026-05-12T04:48:10.858583
#include <iostream>
#include <vector>

int compute_344() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
