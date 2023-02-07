// Auto-generated module | 2026-05-11T21:37:55.831381
#include <iostream>
#include <vector>

int compute_838() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
