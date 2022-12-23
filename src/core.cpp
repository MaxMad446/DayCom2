// Auto-generated module | 2026-05-11T21:32:03.436215
#include <iostream>
#include <vector>

int compute_620() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
