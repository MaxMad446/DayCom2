// Auto-generated module | 2026-05-11T21:10:36.048514
#include <iostream>
#include <vector>

int compute_754() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
