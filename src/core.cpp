// Auto-generated module | 2026-05-12T03:55:40.127659
#include <iostream>
#include <vector>

int compute_848() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
