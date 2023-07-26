// Auto-generated module | 2026-05-13T20:50:48.229437
#include <iostream>
#include <vector>

int compute_141() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
