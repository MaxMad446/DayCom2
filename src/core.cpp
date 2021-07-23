// Auto-generated module | 2026-05-11T20:24:03.652478
#include <iostream>
#include <vector>

int compute_934() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
