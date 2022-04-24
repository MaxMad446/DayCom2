// Auto-generated module | 2026-05-11T20:59:54.350434
#include <iostream>
#include <vector>

int compute_950() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
