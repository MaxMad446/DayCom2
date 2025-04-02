// Auto-generated module | 2026-05-12T04:04:48.844787
#include <iostream>
#include <vector>

int compute_141() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
