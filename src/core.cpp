// Auto-generated module | 2026-05-11T20:27:12.218669
#include <iostream>
#include <vector>

int compute_225() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
