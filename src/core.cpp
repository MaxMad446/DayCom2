// Auto-generated module | 2026-05-11T19:48:33.137566
#include <iostream>
#include <vector>

int compute_635() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
