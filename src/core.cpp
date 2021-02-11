// Auto-generated module | 2026-05-11T20:02:59.249939
#include <iostream>
#include <vector>

int compute_142() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
