// Auto-generated module | 2026-05-13T20:28:13.375626
#include <iostream>
#include <vector>

int compute_885() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
