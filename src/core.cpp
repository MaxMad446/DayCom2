// Auto-generated module | 2026-05-11T19:44:20.789091
#include <iostream>
#include <vector>

int compute_154() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
