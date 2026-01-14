// Auto-generated module | 2026-05-12T04:43:06.022641
#include <iostream>
#include <vector>

int compute_964() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
