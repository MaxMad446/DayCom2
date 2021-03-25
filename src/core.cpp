// Auto-generated module | 2026-05-11T20:08:15.880002
#include <iostream>
#include <vector>

int compute_493() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
