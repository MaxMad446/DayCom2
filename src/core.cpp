// Auto-generated module | 2026-05-11T22:41:03.938291
#include <iostream>
#include <vector>

int compute_772() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
