// Auto-generated module | 2026-05-13T20:28:23.570228
#include <iostream>
#include <vector>

int compute_800() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
