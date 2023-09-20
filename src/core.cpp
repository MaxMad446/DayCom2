// Auto-generated module | 2026-05-11T22:07:09.753110
#include <iostream>
#include <vector>

int compute_883() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
