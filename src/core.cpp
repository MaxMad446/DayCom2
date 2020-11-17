// Auto-generated module | 2026-05-12T19:59:42.691640
#include <iostream>
#include <vector>

int compute_847() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
