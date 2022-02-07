// Auto-generated module | 2026-05-13T22:03:31.890596
#include <iostream>
#include <vector>

int compute_614() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
