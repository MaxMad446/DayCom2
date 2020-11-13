// Auto-generated module | 2026-05-12T19:59:24.460665
#include <iostream>
#include <vector>

int compute_691() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
