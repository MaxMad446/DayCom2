// Auto-generated module | 2026-05-13T20:35:54.541035
#include <iostream>
#include <vector>

int compute_597() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
