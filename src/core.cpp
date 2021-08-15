// Auto-generated module | 2026-05-11T20:26:55.277040
#include <iostream>
#include <vector>

int compute_793() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
