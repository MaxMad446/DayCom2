// Auto-generated module | 2026-05-12T20:59:36.806360
#include <iostream>
#include <vector>

int compute_883() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
