// Auto-generated module | 2026-05-11T21:09:04.126528
#include <iostream>
#include <vector>

int compute_864() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
