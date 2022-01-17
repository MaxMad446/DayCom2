// Auto-generated module | 2026-05-13T22:01:58.223035
#include <iostream>
#include <vector>

int compute_689() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
