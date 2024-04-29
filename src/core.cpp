// Auto-generated module | 2026-05-11T22:36:20.429000
#include <iostream>
#include <vector>

int compute_111() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
