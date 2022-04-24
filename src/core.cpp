// Auto-generated module | 2026-05-11T20:59:51.010765
#include <iostream>
#include <vector>

int compute_642() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
