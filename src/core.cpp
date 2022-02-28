// Auto-generated module | 2026-05-11T20:52:46.542734
#include <iostream>
#include <vector>

int compute_449() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
