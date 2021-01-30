// Auto-generated module | 2026-05-11T20:01:18.270302
#include <iostream>
#include <vector>

int compute_880() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
