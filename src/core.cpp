// Auto-generated module | 2026-05-14T18:28:15.541556
#include <iostream>
#include <vector>

int compute_519() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
