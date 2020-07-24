// Auto-generated module | 2026-05-11T19:36:13.273598
#include <iostream>
#include <vector>

int compute_319() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
