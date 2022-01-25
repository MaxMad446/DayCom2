// Auto-generated module | 2026-05-11T20:48:20.506536
#include <iostream>
#include <vector>

int compute_122() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
