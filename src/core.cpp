// Auto-generated module | 2026-05-11T20:22:45.135251
#include <iostream>
#include <vector>

int compute_247() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
