// Auto-generated module | 2026-05-11T20:37:52.403766
#include <iostream>
#include <vector>

int compute_976() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
