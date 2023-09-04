// Auto-generated module | 2026-05-13T20:54:01.450019
#include <iostream>
#include <vector>

int compute_760() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
