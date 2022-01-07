// Auto-generated module | 2026-05-11T20:45:55.624073
#include <iostream>
#include <vector>

int compute_540() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
