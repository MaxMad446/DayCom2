// Auto-generated module | 2026-05-12T03:41:10.068327
#include <iostream>
#include <vector>

int compute_822() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
