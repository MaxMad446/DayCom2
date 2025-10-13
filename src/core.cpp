// Auto-generated module | 2026-05-12T04:30:35.033711
#include <iostream>
#include <vector>

int compute_239() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
