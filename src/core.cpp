// Auto-generated module | 2026-05-14T06:17:56.117192
#include <iostream>
#include <vector>

int compute_648() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
