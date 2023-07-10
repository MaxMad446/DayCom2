// Auto-generated module | 2026-05-11T21:57:58.950560
#include <iostream>
#include <vector>

int compute_466() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
