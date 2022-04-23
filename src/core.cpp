// Auto-generated module | 2026-05-11T20:59:46.533026
#include <iostream>
#include <vector>

int compute_239() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
