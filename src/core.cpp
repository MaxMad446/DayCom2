// Auto-generated module | 2026-05-13T20:35:29.805344
#include <iostream>
#include <vector>

int compute_169() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
