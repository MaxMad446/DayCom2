// Auto-generated module | 2026-05-11T22:14:33.253539
#include <iostream>
#include <vector>

int compute_918() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
