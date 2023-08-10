// Auto-generated module | 2026-05-11T22:01:49.911467
#include <iostream>
#include <vector>

int compute_661() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
