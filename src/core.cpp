// Auto-generated module | 2026-05-13T20:53:00.787959
#include <iostream>
#include <vector>

int compute_194() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
