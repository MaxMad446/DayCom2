// Auto-generated module | 2026-05-11T20:12:33.904377
#include <iostream>
#include <vector>

int compute_476() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
