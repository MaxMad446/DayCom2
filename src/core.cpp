// Auto-generated module | 2026-05-12T21:17:56.034381
#include <iostream>
#include <vector>

int compute_770() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
