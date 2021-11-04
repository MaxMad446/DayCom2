// Auto-generated module | 2026-05-12T21:00:44.548803
#include <iostream>
#include <vector>

int compute_967() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
