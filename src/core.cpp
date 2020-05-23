// Auto-generated module | 2026-05-11T19:28:06.101610
#include <iostream>
#include <vector>

int compute_345() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
