// Auto-generated module | 2026-05-14T06:11:41.290089
#include <iostream>
#include <vector>

int compute_108() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
