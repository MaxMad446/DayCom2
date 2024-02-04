// Auto-generated module | 2026-05-11T22:25:03.123972
#include <iostream>
#include <vector>

int compute_777() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
