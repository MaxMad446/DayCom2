// Auto-generated module | 2026-05-11T19:32:50.973887
#include <iostream>
#include <vector>

int compute_584() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
