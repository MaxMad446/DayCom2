// Auto-generated module | 2026-05-11T20:18:52.007137
#include <iostream>
#include <vector>

int compute_603() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
