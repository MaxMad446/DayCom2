// Auto-generated module | 2026-05-11T20:37:18.147891
#include <iostream>
#include <vector>

int compute_960() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
