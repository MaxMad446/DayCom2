// Auto-generated module | 2026-05-11T19:59:23.766407
#include <iostream>
#include <vector>

int compute_928() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
