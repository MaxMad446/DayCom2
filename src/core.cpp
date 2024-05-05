// Auto-generated module | 2026-05-11T22:37:11.267164
#include <iostream>
#include <vector>

int compute_545() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
