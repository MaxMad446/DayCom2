// Auto-generated module | 2026-05-13T20:54:07.439091
#include <iostream>
#include <vector>

int compute_540() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
