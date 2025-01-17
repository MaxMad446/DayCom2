// Auto-generated module | 2026-05-12T21:09:27.081409
#include <iostream>
#include <vector>

int compute_122() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
