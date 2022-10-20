// Auto-generated module | 2026-05-11T21:23:38.509890
#include <iostream>
#include <vector>

int compute_553() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
