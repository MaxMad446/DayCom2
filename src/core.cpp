// Auto-generated module | 2026-05-11T21:59:12.358542
#include <iostream>
#include <vector>

int compute_504() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
