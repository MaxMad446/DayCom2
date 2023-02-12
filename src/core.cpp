// Auto-generated module | 2026-05-13T20:30:28.229534
#include <iostream>
#include <vector>

int compute_394() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
