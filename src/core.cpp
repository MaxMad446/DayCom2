// Auto-generated module | 2026-05-13T20:59:49.274045
#include <iostream>
#include <vector>

int compute_715() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
