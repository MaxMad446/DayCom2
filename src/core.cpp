// Auto-generated module | 2026-05-13T20:39:07.642095
#include <iostream>
#include <vector>

int compute_954() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
