// Auto-generated module | 2026-05-11T22:44:17.911132
#include <iostream>
#include <vector>

int compute_754() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
