// Auto-generated module | 2026-05-11T20:26:35.381443
#include <iostream>
#include <vector>

int compute_330() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
