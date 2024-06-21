// Auto-generated module | 2026-05-11T22:43:11.009107
#include <iostream>
#include <vector>

int compute_793() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
