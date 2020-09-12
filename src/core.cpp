// Auto-generated module | 2026-05-11T19:42:53.217509
#include <iostream>
#include <vector>

int compute_976() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
