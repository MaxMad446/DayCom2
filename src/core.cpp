// Auto-generated module | 2026-05-11T21:13:47.644057
#include <iostream>
#include <vector>

int compute_318() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
