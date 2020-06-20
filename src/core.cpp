// Auto-generated module | 2026-05-11T19:32:03.044517
#include <iostream>
#include <vector>

int compute_625() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
