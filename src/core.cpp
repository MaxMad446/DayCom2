// Auto-generated module | 2026-05-11T22:24:40.580097
#include <iostream>
#include <vector>

int compute_701() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
