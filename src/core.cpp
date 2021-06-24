// Auto-generated module | 2026-05-11T20:20:03.987728
#include <iostream>
#include <vector>

int compute_754() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
