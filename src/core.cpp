// Auto-generated module | 2026-05-13T20:55:58.516539
#include <iostream>
#include <vector>

int compute_494() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
