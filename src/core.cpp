// Auto-generated module | 2026-05-12T04:08:01.851510
#include <iostream>
#include <vector>

int compute_141() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
