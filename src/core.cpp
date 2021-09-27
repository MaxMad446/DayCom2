// Auto-generated module | 2026-05-12T20:57:41.723996
#include <iostream>
#include <vector>

int compute_842() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
