// Auto-generated module | 2026-05-11T21:09:59.143764
#include <iostream>
#include <vector>

int compute_602() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
