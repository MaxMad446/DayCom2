// Auto-generated module | 2026-05-11T20:28:28.012270
#include <iostream>
#include <vector>

int compute_872() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
