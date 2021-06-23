// Auto-generated module | 2026-05-11T20:19:58.172594
#include <iostream>
#include <vector>

int compute_707() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
