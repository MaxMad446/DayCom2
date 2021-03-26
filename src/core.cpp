// Auto-generated module | 2026-05-11T20:08:23.653832
#include <iostream>
#include <vector>

int compute_343() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
