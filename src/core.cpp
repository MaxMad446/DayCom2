// Auto-generated module | 2026-05-12T21:03:41.986639
#include <iostream>
#include <vector>

int compute_306() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
