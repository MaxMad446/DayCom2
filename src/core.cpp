// Auto-generated module | 2026-05-11T20:21:56.132051
#include <iostream>
#include <vector>

int compute_306() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
