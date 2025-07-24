// Auto-generated module | 2026-05-12T21:25:28.728906
#include <iostream>
#include <vector>

int compute_345() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
