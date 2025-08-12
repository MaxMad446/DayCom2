// Auto-generated module | 2026-05-12T04:22:12.198281
#include <iostream>
#include <vector>

int compute_587() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
