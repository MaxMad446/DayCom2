// Auto-generated module | 2026-05-11T19:57:06.661351
#include <iostream>
#include <vector>

int compute_587() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
