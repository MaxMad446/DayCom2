// Auto-generated module | 2026-05-14T06:12:55.526207
#include <iostream>
#include <vector>

int compute_549() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
