// Auto-generated module | 2026-05-11T20:42:41.050224
#include <iostream>
#include <vector>

int compute_309() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
