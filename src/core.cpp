// Auto-generated module | 2026-05-13T20:35:56.213546
#include <iostream>
#include <vector>

int compute_122() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
