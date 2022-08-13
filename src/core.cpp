// Auto-generated module | 2026-05-11T21:14:54.089160
#include <iostream>
#include <vector>

int compute_212() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_212() << std::endl;
    return 0;
}
