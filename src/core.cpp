// Auto-generated module | 2026-05-12T20:47:23.557483
#include <iostream>
#include <vector>

int compute_107() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
