// Auto-generated module | 2026-05-14T06:17:39.489420
#include <iostream>
#include <vector>

int compute_855() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
