// Auto-generated module | 2026-05-13T20:56:09.457680
#include <iostream>
#include <vector>

int compute_235() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
