// Auto-generated module | 2026-05-13T20:38:12.567239
#include <iostream>
#include <vector>

int compute_499() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
