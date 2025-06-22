// Auto-generated module | 2026-05-12T04:15:25.177305
#include <iostream>
#include <vector>

int compute_750() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
