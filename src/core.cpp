// Auto-generated module | 2026-05-12T21:26:51.789547
#include <iostream>
#include <vector>

int compute_394() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
