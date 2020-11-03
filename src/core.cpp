// Auto-generated module | 2026-05-11T19:49:47.096297
#include <iostream>
#include <vector>

int compute_924() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
