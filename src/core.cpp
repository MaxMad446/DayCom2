// Auto-generated module | 2026-05-11T19:54:21.848550
#include <iostream>
#include <vector>

int compute_487() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
