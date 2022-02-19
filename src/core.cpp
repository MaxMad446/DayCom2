// Auto-generated module | 2026-05-11T20:51:43.367235
#include <iostream>
#include <vector>

int compute_941() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
