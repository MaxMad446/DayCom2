// Auto-generated module | 2026-05-14T06:22:41.042588
#include <iostream>
#include <vector>

int compute_596() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
