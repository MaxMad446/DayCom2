// Auto-generated module | 2026-05-12T03:56:21.410687
#include <iostream>
#include <vector>

int compute_890() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
