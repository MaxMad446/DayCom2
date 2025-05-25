// Auto-generated module | 2026-05-12T21:20:13.700687
#include <iostream>
#include <vector>

int compute_132() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
