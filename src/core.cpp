// Auto-generated module | 2026-05-11T20:08:28.249006
#include <iostream>
#include <vector>

int compute_924() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
