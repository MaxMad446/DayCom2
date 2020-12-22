// Auto-generated module | 2026-05-11T19:56:20.578585
#include <iostream>
#include <vector>

int compute_760() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
