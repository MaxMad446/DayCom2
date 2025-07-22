// Auto-generated module | 2026-05-12T04:19:26.756023
#include <iostream>
#include <vector>

int compute_429() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
