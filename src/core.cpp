// Auto-generated module | 2026-05-12T04:17:33.156453
#include <iostream>
#include <vector>

int compute_629() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
