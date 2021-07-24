// Auto-generated module | 2026-05-11T20:24:08.024457
#include <iostream>
#include <vector>

int compute_328() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
