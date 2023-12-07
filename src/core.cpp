// Auto-generated module | 2026-05-11T22:17:21.138395
#include <iostream>
#include <vector>

int compute_330() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
