// Auto-generated module | 2026-05-11T19:55:47.268289
#include <iostream>
#include <vector>

int compute_540() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
