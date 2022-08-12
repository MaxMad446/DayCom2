// Auto-generated module | 2026-05-11T21:14:45.854934
#include <iostream>
#include <vector>

int compute_934() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
