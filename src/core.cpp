// Auto-generated module | 2026-05-11T20:37:29.454832
#include <iostream>
#include <vector>

int compute_325() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
