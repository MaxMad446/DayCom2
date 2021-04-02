// Auto-generated module | 2026-05-12T20:42:27.351875
#include <iostream>
#include <vector>

int compute_685() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
