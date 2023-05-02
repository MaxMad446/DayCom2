// Auto-generated module | 2026-05-13T20:37:06.920709
#include <iostream>
#include <vector>

int compute_810() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
