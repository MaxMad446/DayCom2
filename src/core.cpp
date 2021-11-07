// Auto-generated module | 2026-05-12T21:01:01.709944
#include <iostream>
#include <vector>

int compute_105() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
