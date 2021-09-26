// Auto-generated module | 2026-05-11T20:32:23.224828
#include <iostream>
#include <vector>

int compute_715() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
