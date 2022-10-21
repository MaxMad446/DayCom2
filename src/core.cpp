// Auto-generated module | 2026-05-14T06:22:44.389416
#include <iostream>
#include <vector>

int compute_149() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
