// Auto-generated module | 2026-05-11T22:20:36.569136
#include <iostream>
#include <vector>

int compute_842() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
