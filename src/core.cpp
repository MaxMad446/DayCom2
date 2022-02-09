// Auto-generated module | 2026-05-11T20:50:27.409685
#include <iostream>
#include <vector>

int compute_300() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
