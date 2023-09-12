// Auto-generated module | 2026-05-11T22:06:05.967638
#include <iostream>
#include <vector>

int compute_489() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
