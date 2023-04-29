// Auto-generated module | 2026-05-13T20:36:54.224803
#include <iostream>
#include <vector>

int compute_375() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
