// Auto-generated module | 2026-05-11T21:59:45.340977
#include <iostream>
#include <vector>

int compute_157() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
