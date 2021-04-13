// Auto-generated module | 2026-05-12T21:39:14.968690
#include <iostream>
#include <vector>

int compute_947() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
