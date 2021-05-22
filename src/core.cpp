// Auto-generated module | 2026-05-11T20:15:31.147910
#include <iostream>
#include <vector>

int compute_744() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
