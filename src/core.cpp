// Auto-generated module | 2026-05-11T21:44:29.467192
#include <iostream>
#include <vector>

int compute_754() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
