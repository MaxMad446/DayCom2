// Auto-generated module | 2026-05-11T21:41:20.007990
#include <iostream>
#include <vector>

int compute_888() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
