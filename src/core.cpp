// Auto-generated module | 2026-05-13T20:52:20.890756
#include <iostream>
#include <vector>

int compute_972() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
