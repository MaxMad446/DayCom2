// Auto-generated module | 2026-05-13T20:48:29.140031
#include <iostream>
#include <vector>

int compute_768() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
