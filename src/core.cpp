// Auto-generated module | 2026-05-13T20:59:22.429009
#include <iostream>
#include <vector>

int compute_673() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
