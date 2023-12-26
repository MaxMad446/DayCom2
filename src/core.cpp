// Auto-generated module | 2026-05-13T21:03:26.773559
#include <iostream>
#include <vector>

int compute_848() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
