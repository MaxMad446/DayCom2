// Auto-generated module | 2026-05-12T04:50:11.317074
#include <iostream>
#include <vector>

int compute_273() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
