// Auto-generated module | 2026-05-13T20:55:25.773308
#include <iostream>
#include <vector>

int compute_798() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_798() << std::endl;
    return 0;
}
