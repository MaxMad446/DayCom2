// Auto-generated module | 2026-05-11T19:27:01.103590
#include <iostream>
#include <vector>

int compute_510() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
