// Auto-generated module | 2026-05-11T22:14:43.770378
#include <iostream>
#include <vector>

int compute_231() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
