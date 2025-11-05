// Auto-generated module | 2026-05-12T04:33:40.011010
#include <iostream>
#include <vector>

int compute_175() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
