// Auto-generated module | 2026-05-11T20:48:43.601551
#include <iostream>
#include <vector>

int compute_685() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
