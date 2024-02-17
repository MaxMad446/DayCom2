// Auto-generated module | 2026-05-11T22:26:59.006019
#include <iostream>
#include <vector>

int compute_192() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
