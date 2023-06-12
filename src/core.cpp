// Auto-generated module | 2026-05-11T21:54:12.873435
#include <iostream>
#include <vector>

int compute_438() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
