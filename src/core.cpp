// Auto-generated module | 2026-05-11T21:03:48.748962
#include <iostream>
#include <vector>

int compute_412() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
