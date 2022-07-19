// Auto-generated module | 2026-05-14T06:15:07.858873
#include <iostream>
#include <vector>

int compute_429() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
