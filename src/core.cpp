// Auto-generated module | 2026-05-11T21:40:26.143753
#include <iostream>
#include <vector>

int compute_743() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
