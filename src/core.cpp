// Auto-generated module | 2026-05-14T06:28:39.004713
#include <iostream>
#include <vector>

int compute_567() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
