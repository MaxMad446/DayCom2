// Auto-generated module | 2026-05-11T22:48:36.970179
#include <iostream>
#include <vector>

int compute_239() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
