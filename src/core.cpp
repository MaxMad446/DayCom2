// Auto-generated module | 2026-05-12T21:36:59.290795
#include <iostream>
#include <vector>

int compute_456() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
