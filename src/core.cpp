// Auto-generated module | 2026-05-11T22:36:15.739872
#include <iostream>
#include <vector>

int compute_502() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
