// Auto-generated module | 2026-05-13T20:51:55.304822
#include <iostream>
#include <vector>

int compute_715() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
