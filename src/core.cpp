// Auto-generated module | 2026-05-13T21:02:45.967251
#include <iostream>
#include <vector>

int compute_306() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
