// Auto-generated module | 2026-05-13T20:32:23.087901
#include <iostream>
#include <vector>

int compute_359() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
