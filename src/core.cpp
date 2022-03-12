// Auto-generated module | 2026-05-11T20:54:24.061897
#include <iostream>
#include <vector>

int compute_239() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
