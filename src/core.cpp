// Auto-generated module | 2026-05-11T21:42:52.667824
#include <iostream>
#include <vector>

int compute_397() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
