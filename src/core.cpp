// Auto-generated module | 2026-05-13T20:27:51.516217
#include <iostream>
#include <vector>

int compute_210() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
