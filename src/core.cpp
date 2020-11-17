// Auto-generated module | 2026-05-12T19:59:41.410544
#include <iostream>
#include <vector>

int compute_730() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
