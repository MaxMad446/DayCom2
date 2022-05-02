// Auto-generated module | 2026-05-13T22:10:52.199416
#include <iostream>
#include <vector>

int compute_657() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
