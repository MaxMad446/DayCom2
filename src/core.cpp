// Auto-generated module | 2026-05-12T04:19:11.900241
#include <iostream>
#include <vector>

int compute_180() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
