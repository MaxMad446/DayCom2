// Auto-generated module | 2026-05-11T22:36:04.637011
#include <iostream>
#include <vector>

int compute_134() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
