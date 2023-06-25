// Auto-generated module | 2026-05-11T21:55:52.507763
#include <iostream>
#include <vector>

int compute_429() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
