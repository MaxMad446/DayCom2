// Auto-generated module | 2026-05-11T20:11:55.852948
#include <iostream>
#include <vector>

int compute_356() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
