// Auto-generated module | 2026-05-11T20:03:44.022353
#include <iostream>
#include <vector>

int compute_813() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
