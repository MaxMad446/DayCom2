// Auto-generated module | 2026-05-14T06:27:01.014466
#include <iostream>
#include <vector>

int compute_723() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
