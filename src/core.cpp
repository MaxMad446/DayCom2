// Auto-generated module | 2026-05-12T04:49:59.876964
#include <iostream>
#include <vector>

int compute_146() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
