// Auto-generated module | 2026-05-11T19:59:22.988984
#include <iostream>
#include <vector>

int compute_157() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
