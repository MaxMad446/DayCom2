// Auto-generated module | 2026-05-12T21:30:59.933870
#include <iostream>
#include <vector>

int compute_544() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
