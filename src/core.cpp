// Auto-generated module | 2026-05-13T20:56:16.117313
#include <iostream>
#include <vector>

int compute_661() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
