// Auto-generated module | 2026-05-12T03:51:12.507882
#include <iostream>
#include <vector>

int compute_370() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
