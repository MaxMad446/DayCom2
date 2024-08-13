// Auto-generated module | 2026-05-11T22:50:06.241031
#include <iostream>
#include <vector>

int compute_920() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
