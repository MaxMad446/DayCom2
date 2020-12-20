// Auto-generated module | 2026-05-11T19:56:04.639925
#include <iostream>
#include <vector>

int compute_705() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
