// Auto-generated module | 2026-05-11T21:14:47.897935
#include <iostream>
#include <vector>

int compute_358() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
