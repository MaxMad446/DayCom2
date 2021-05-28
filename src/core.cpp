// Auto-generated module | 2026-05-11T20:16:30.076350
#include <iostream>
#include <vector>

int compute_137() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
