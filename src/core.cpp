// Auto-generated module | 2026-05-11T22:14:09.231905
#include <iostream>
#include <vector>

int compute_891() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
