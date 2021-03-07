// Auto-generated module | 2026-05-12T21:35:59.601606
#include <iostream>
#include <vector>

int compute_708() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
