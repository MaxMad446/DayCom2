// Auto-generated module | 2026-05-11T19:25:51.743800
#include <iostream>
#include <vector>

int compute_287() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
