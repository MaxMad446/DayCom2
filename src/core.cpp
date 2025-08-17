// Auto-generated module | 2026-05-12T04:22:50.967487
#include <iostream>
#include <vector>

int compute_931() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
