// Auto-generated module | 2026-05-11T20:29:43.500306
#include <iostream>
#include <vector>

int compute_499() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
