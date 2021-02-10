// Auto-generated module | 2026-05-12T21:34:01.949212
#include <iostream>
#include <vector>

int compute_989() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
