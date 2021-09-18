// Auto-generated module | 2026-05-11T20:31:22.955981
#include <iostream>
#include <vector>

int compute_599() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
