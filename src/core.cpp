// Auto-generated module | 2026-05-11T20:36:02.365273
#include <iostream>
#include <vector>

int compute_337() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
