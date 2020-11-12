// Auto-generated module | 2026-05-12T19:59:16.586705
#include <iostream>
#include <vector>

int compute_685() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
