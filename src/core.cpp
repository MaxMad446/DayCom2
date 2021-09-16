// Auto-generated module | 2026-05-11T20:31:02.045854
#include <iostream>
#include <vector>

int compute_275() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
