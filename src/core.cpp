// Auto-generated module | 2026-05-14T06:28:41.829567
#include <iostream>
#include <vector>

int compute_688() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
