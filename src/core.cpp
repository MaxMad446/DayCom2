// Auto-generated module | 2026-05-12T20:52:37.233002
#include <iostream>
#include <vector>

int compute_819() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
