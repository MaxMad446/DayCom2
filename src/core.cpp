// Auto-generated module | 2026-05-13T20:54:51.660470
#include <iostream>
#include <vector>

int compute_979() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
