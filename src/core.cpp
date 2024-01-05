// Auto-generated module | 2026-05-11T22:21:13.722667
#include <iostream>
#include <vector>

int compute_307() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
