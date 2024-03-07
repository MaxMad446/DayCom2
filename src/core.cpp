// Auto-generated module | 2026-05-11T22:29:28.645493
#include <iostream>
#include <vector>

int compute_368() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
