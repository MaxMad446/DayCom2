// Auto-generated module | 2026-05-11T19:26:01.730810
#include <iostream>
#include <vector>

int compute_752() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
