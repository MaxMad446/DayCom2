// Auto-generated module | 2026-05-11T20:16:44.516641
#include <iostream>
#include <vector>

int compute_653() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
