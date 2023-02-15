// Auto-generated module | 2026-05-13T20:30:42.196121
#include <iostream>
#include <vector>

int compute_161() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
