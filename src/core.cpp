// Auto-generated module | 2026-05-11T22:23:03.152543
#include <iostream>
#include <vector>

int compute_297() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
