// Auto-generated module | 2026-05-11T19:36:01.199416
#include <iostream>
#include <vector>

int compute_924() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
