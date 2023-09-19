// Auto-generated module | 2026-05-13T20:55:20.327486
#include <iostream>
#include <vector>

int compute_141() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
