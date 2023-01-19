// Auto-generated module | 2026-05-11T21:35:33.974763
#include <iostream>
#include <vector>

int compute_794() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
